#include "employe.h"
#include "ui_employe.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QVBoxLayout>
#include "employe.h"
#include "ui_employe.h"
#include <QPdfWriter>
#include <QPainter>
#include <QMessageBox>
#include <QFileDialog>
#include <QFont>
#include <QDebug>
#include <QTableView>
#include <QStyledItemDelegate>
#include <QPdfWriter>
#include <QPainter>
#include <QDate>
#include <QFileDialog>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>
#include <QDesktopServices>

#include <QtPrintSupport/QPrinter>

#include <QWidget>
#include <QMessageBox>
#include <QMainWindow>




employe::employe(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::employe)
{
    ui->setupUi(this);
    arduino = new QSerialPort();
    arduinoIsAvailable = false;
    arduinoportname = "";
    qDebug() << "Number of ports: " << QSerialPortInfo::availablePorts().length();
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        if(serialPortInfo.hasVendorIdentifier()&&serialPortInfo.hasProductIdentifier())
        {
            qDebug()<<"é"<<serialPortInfo.hasVendorIdentifier();
            qDebug()<<"aa"<<serialPortInfo.hasProductIdentifier();
            arduinoportname = serialPortInfo.portName(); // Store the port name

                      arduinoIsAvailable = true;
                      break;

        }
    }

    if (arduinoIsAvailable) {
        qDebug() << "Port à ouvrir : " << arduinoportname;

        arduino->setPortName(arduinoportname);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);

        if (arduino->open(QIODevice::ReadWrite)) {
            qDebug() << "Connected to: " << arduinoportname;
            connect(arduino, &QSerialPort::readyRead, this, &employe::readKeypadInput);  // Connect readyRead signal to readKeypadInput slot
        } else {
            QMessageBox::critical(this, "Error", "Failed to open the serial port.");
        }
    } else {
        QMessageBox::critical(this, "Error", "No Arduino device found.");
    }


}
QString currentCode;  // Variable pour accumuler les touches

void employe::readKeypadInput() {
    if (!arduino->canReadLine()) return;

    QByteArray data = arduino->readLine().trimmed(); // Lire la ligne complète
    QString input(data); // Convertir en QString

    qDebug() << "Données reçues du keypad : " << input;

    // Vérifier si le dernier caractère est '#'
    if (input.endsWith('#')) {
        // Supprimer le caractère '#' et accumuler les chiffres
        currentCode += input.left(input.length() - 1);

        // Convertir le code accumulé en entier
        bool ok;
        int code = currentCode.toInt(&ok);

        if (ok) {
            qDebug() << "Code à vérifier : " << code;

            // Vérifier l'existence du code
            QString np = isCodeExists(code);  // Appeler la méthode qui retourne NP
            qDebug() << "NP retourné par isCodeExists : " << np;  // Afficher NP retourné

            // Afficher un message en fonction de la présence du code
            if (np.length()>2) {
                // Afficher un message d'information avec NP
                QMessageBox::information(this, "Succès", "Bonjour et bienvenue : " + np);
                qDebug() << "Le code existe dans la table employeec, NP : " << np;
            } else {
                // Afficher un message d'erreur si le code n'est pas trouvé
                QMessageBox::warning(this, "Erreur", "Le code n'existe pas dans la base de données.");
                qDebug() << "Le code n'existe pas dans la table employeec.";
            }
        } else {
            // Afficher un message d'erreur si le code est invalide
            QMessageBox::warning(this, "Erreur", "Le code n'est pas valide.");
            qDebug() << "Le code est invalide.";
        }

        // Réinitialiser currentCode pour la prochaine saisie
        currentCode.clear();
    } else {
        // Accumuler les touches
        currentCode += input;
        qDebug() << "Code en cours : " << currentCode;
    }
}



employe::~employe()
{
    if (arduino->isOpen()) {
         arduino->close();  // Close the serial port
     }
     delete ui;
}
QString employe::isCodeExists(const int code) {
    QSqlQuery query;

    // Préparer la requête pour récupérer la valeur de NP
    query.prepare("SELECT NP FROM employeec WHERE CODE = :code");
    query.bindValue(":code", code);

    // Exécuter la requête SQL
    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError().text();
        return "";  // Retourner une chaîne vide en cas d'erreur
    }

    if (query.next()) {
        QString np = query.value(0).toString();
        return np;
    }
    return "";
}



void employe::on_ajout_clicked()
{
    QString ID = ui->id->text();
    QString NP = ui->prixc->text();
    QString STAT = ui->prixl_3->text();
    QString SAL = ui->prixl_4->text();
    QString POST = ui->prixl->text();
    QString DIP = ui->prixl_2->text();
    QString PT = ui->prixl_5->text();
    QString NBC = ui->prixl_6->text();
    int CODE = ui->prixl_7->text().toInt();



    // Create an employec object with the data from the UI
    employec e(ID, NP, STAT, SAL, POST, DIP, PT, NBC,CODE);

    // Call the ajouter_employe method and check if it was successful
    bool test = e.ajouter_employe();
    if (test) {
        QMessageBox::information(nullptr, "Succès", "Ajout effectué avec succès");
        // Uncomment the following line if you have a function to clear fields
        // clearFields();
    } else {
        QMessageBox::warning(nullptr, "Échec", "Ajout non effectué");
    }

    // Clear fields after adding
    clearFields();

    // Update the table view to display the new data
    ui->tableView->setModel(e.afficher());
}
void employe::clearFields() {
    ui->id->clear();
    ui->prixc->clear();
    ui->prixl_3->clear();
    ui->prixl_4->clear();
    ui->prixl->clear();
    ui->prixl_2->clear();
    ui->prixl_5->clear();
    ui->prixl_6->clear();
}


void employe::on_afficher_clicked()
{
    ui->tableView->setModel(e.afficher());

}

void employe::on_modif_clicked()
{
    QString ID = ui->id->text();  // ID is read-only, so this is fine
    QString NP = ui->prixc->text();
    QString STAT = ui->prixl_3->text();
    QString SAL = ui->prixl_4->text();
    QString POST = ui->prixl->text();
    QString DIP = ui->prixl_2->text();
    QString PT = ui->prixl_5->text();
    QString NBC = ui->prixl_6->text();
    int CODE = ui->prixl_7->text().toInt();


    // Vérifier si l'ID existe dans la base de données
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        // Si l'ID n'existe pas
        QMessageBox::warning(nullptr, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return;
    }

    // Si l'ID existe, procéder à la modification
    employec e(ID, NP, STAT, SAL, POST, DIP, PT, NBC,CODE);

    // Appeler la fonction modifier
    bool test = e.modifier_employe();

    if (test) {
        ui->tableView->setModel(e.afficher());  // Recharger les données dans le tableView
        clearFields();
        QMessageBox::information(nullptr, "Succès", "La modification a été effectuée avec succès.");
    } else {
        QMessageBox::warning(nullptr, "Échec", "La modification a échoué.");
    }
}

void employe::on_supprimer_clicked()
{
    QString ID = ui->recherche->text();  // Assumes ID is displayed in a read-only field

    if (ID.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un employé à supprimer.");
        return;
    }

    // Créer une instance de employec pour vérifier si l'ID existe dans la base de données
    employec e;

    // Vérifier si l'ID existe avant de supprimer
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        // Si l'ID n'existe pas dans la base de données
        QMessageBox::warning(this, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return;
    }

    // Afficher une boîte de confirmation avant de supprimer
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer cet employé ?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // Appeler la méthode de suppression
        bool test = e.supprimer_employe(ID);

        if (test) {
            ui->tableView->setModel(e.afficher());  // Recharger les données dans le tableView
            clearFields();
        }
    }
}

void employe::on_rech_clicked()
{
    QString ID = ui->recherche->text();
    employec e;

    // Vérifier si l'ID existe avant de supprimer
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        QMessageBox::warning(this, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return;
    }
    ui->tableView->setModel(e.afficherunEmployee(ID));

}


void employe::on_tabWidget_2_currentChanged(int index)
{



}


void employe::on_tabWidget_2_tabBarClicked(int index)
{

    QPieSeries *series = new QPieSeries();
    QVector<float> percents = employec::getPercent();

    series->append("500", (percents[1]) );
    series->append("1000", (percents[2] ));
    series->append("1550", (percents[3] ));
    series->append("2000", (percents[4] ));


    QChart *chart = new QChart();
    chart->addSeries(series);


    chart->setTitle("Répartition des catégories");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    if (ui->layout) {

        QLayoutItem *item;
        while ((item = ui->layout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
    }

      ui->layout->addWidget(chartView);


    chartView->setMinimumSize(400, 300);
}


void employe::on_exporter_clicked()
{
    exportToPdf();
}

void employe::exportToPdf()
{
    // Ouvre une boîte de dialogue pour choisir l'emplacement et le nom du fichier PDF
    QString filePath = QFileDialog::getSaveFileName(
        this, "Save Employee Data as PDF", "", "PDF Files (*.pdf)");

    // Si un chemin de fichier valide est sélectionné
    if (!filePath.isEmpty()) {
        // Ajouter l'extension .pdf si elle n'est pas présente
        if (!filePath.endsWith(".pdf")) {
            filePath += ".pdf";
        }

        employec emp;
        QSqlQueryModel* model = emp.afficher();

        if (model == nullptr) {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération des données.");
            return;
        }

        QVector<employec> employes;
        for (int row = 0; row < model->rowCount(); ++row) {
            employec emp;
            emp.setID(model->data(model->index(row, 0)).toString());
            emp.setNP(model->data(model->index(row, 1)).toString());
            emp.setSTAT(model->data(model->index(row, 2)).toString());
            emp.setSAL(model->data(model->index(row, 3)).toString());
            emp.setPOST(model->data(model->index(row, 4)).toString());
            emp.setDIP(model->data(model->index(row, 5)).toString());
            emp.setPT(model->data(model->index(row, 6)).toString());
            emp.setNBC(model->data(model->index(row, 7)).toString());

            employes.append(emp);
        }

        QFont font("Arial", 12);  // Police légèrement agrandie
        QPdfWriter pdfWriter(filePath);
        pdfWriter.setPageSize(QPageSize(QPageSize::A4));
        pdfWriter.setTitle("Export Employees");
        pdfWriter.setCreator("Employee Management System");

        QPainter painter;
        painter.begin(&pdfWriter);
        painter.setFont(font);
        // Définir un style de trait personnalisé
        QPen pen;
        pen.setColor(Qt::black);           // Couleur des traits
        pen.setWidth(3);                   // Épaisseur des traits (ajustable)
        pen.setStyle(Qt::SolidLine);       // Style des traits (SolidLine, DashLine, DotLine, etc.)
        painter.setPen(pen);

        int margin = 100;        // Marge autour du tableau
        int y = margin;          // Position verticale initiale
        int rowHeight = 1000;    // Hauteur de chaque ligne
        int headerHeight = 1000; // Hauteur des en-têtes
        int columnWidth = 2000;  // Largeur des colonnes
        int textMargin = 200;    // Marge intérieure pour le texte

        // Dessiner les en-têtes du tableau
        painter.drawRect(margin, y, columnWidth, headerHeight);                    // Colonne ID
        painter.drawRect(margin + columnWidth, y, columnWidth * 2, headerHeight);  // Colonne Nom/Prénom
        painter.drawRect(margin + columnWidth * 3, y, columnWidth, headerHeight);  // Colonne Poste
        painter.drawRect(margin + columnWidth * 4, y, columnWidth, headerHeight);  // Colonne Diplôme

        // Ajouter les en-têtes avec alignement vertical au centre
        QFontMetrics metrics(font);
        painter.drawText(margin + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "ID");
        painter.drawText(margin + columnWidth + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Name");
        painter.drawText(margin + columnWidth * 3 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Post");
        painter.drawText(margin + columnWidth * 4 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Diploma");

        y += headerHeight;

        // Dessiner les données
        for (const employec& emp : employes) {
            // Tracer les bordures des lignes
            painter.drawRect(margin, y, columnWidth, rowHeight);                   // ID
            painter.drawRect(margin + columnWidth, y, columnWidth * 2, rowHeight); // Nom/Prénom
            painter.drawRect(margin + columnWidth * 3, y, columnWidth, rowHeight); // Poste
            painter.drawRect(margin + columnWidth * 4, y, columnWidth, rowHeight); // Diplôme

            // Ajouter les données avec alignement vertical au centre
            painter.drawText(margin + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getID());
            painter.drawText(margin + columnWidth + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getNP());
            painter.drawText(margin + columnWidth * 3 + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getPOST());
            painter.drawText(margin + columnWidth * 4 + textMargin, y + rowHeight / 2 + metrics.ascent() / 2, emp.getDIP());

            y += rowHeight;

            // Gérer le passage à une nouvelle page
            if (y > pdfWriter.height() - margin - rowHeight) {
                pdfWriter.newPage();
                y = margin;

                // Redessiner les en-têtes sur la nouvelle page
                painter.drawRect(margin, y, columnWidth, headerHeight);                    // Colonne ID
                painter.drawRect(margin + columnWidth, y, columnWidth * 2, headerHeight);  // Colonne Nom/Prénom
                painter.drawRect(margin + columnWidth * 3, y, columnWidth, headerHeight);  // Colonne Poste
                painter.drawRect(margin + columnWidth * 4, y, columnWidth, headerHeight);  // Colonne Diplôme

                painter.drawText(margin + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "ID");
                painter.drawText(margin + columnWidth + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Name");
                painter.drawText(margin + columnWidth * 3 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Post");
                painter.drawText(margin + columnWidth * 4 + textMargin, y + headerHeight / 2 + metrics.ascent() / 2, "Diploma");

                y += headerHeight;
            }
        }



        painter.end();

        // Demander si l'utilisateur veut afficher le PDF
        int response = QMessageBox::question(this, "PDF", "Afficher le PDF ?", QMessageBox::Yes | QMessageBox::No);
        if (response == QMessageBox::Yes) {
            QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
        }
    }


}

void employe::on_tri_clicked()
{
    QSqlQueryModel* model = employec::triParID(0);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}


void employe::on_tri_nom_clicked()
{
    QSqlQueryModel* model = employec::triParID(1);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}


void employe::on_tri_statut_clicked()
{
    QSqlQueryModel* model = employec::triParID(2);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}


void employe::on_tri_salaire_clicked()
{
    QSqlQueryModel* model = employec::triParID(3);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}


void employe::on_tri_poste_clicked()
{
    QSqlQueryModel* model = employec::triParID(4);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}


void employe::on_tri_diplome_clicked()
{
    QSqlQueryModel* model = employec::triParID(5);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}


void employe::on_tri_points_clicked()
{
    QSqlQueryModel* model = employec::triParID(6);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}


void employe::on_tri_conge_clicked()
{
    QSqlQueryModel* model = employec::triParID(7);
    if (model) {
        ui->tableView->setModel(model);
        ui->tableView->reset();  // Force la mise à jour de la vue
    }
}

