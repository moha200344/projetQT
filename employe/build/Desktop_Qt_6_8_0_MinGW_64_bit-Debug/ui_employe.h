/********************************************************************************
** Form generated from reading UI file 'employe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYE_H
#define UI_EMPLOYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employe
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame;
    QPushButton *pushButton_5;
    QLabel *icones;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QTabWidget *tabWidget_2;
    QWidget *crud;
    QPushButton *rech;
    QFrame *frame_2;
    QLabel *icones_8;
    QPushButton *ajout;
    QLineEdit *id;
    QLineEdit *prixl;
    QPushButton *modif;
    QLineEdit *prixl_4;
    QLineEdit *prixc;
    QLineEdit *prixl_2;
    QLineEdit *prixl_5;
    QLineEdit *prixl_3;
    QLineEdit *prixl_6;
    QPushButton *supprimer;
    QTableView *tableView;
    QLineEdit *recherche;
    QPushButton *afficher;
    QPushButton *exporter;
    QPushButton *tri;
    QPushButton *tri_nom;
    QPushButton *tri_statut;
    QPushButton *tri_salaire;
    QPushButton *tri_poste;
    QPushButton *tri_diplome;
    QPushButton *tri_points;
    QPushButton *tri_conge;
    QWidget *stat;
    QWidget *gridLayoutWidget;
    QGridLayout *layout;

    void setupUi(QWidget *employe)
    {
        if (employe->objectName().isEmpty())
            employe->setObjectName("employe");
        employe->resize(1536, 882);
        tabWidget = new QTabWidget(employe);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, -10, 1531, 891));
        tabWidget->setStyleSheet(QString::fromUtf8("#tab {\n"
"    background-color: #4a6f8b;\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        frame = new QFrame(tab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 10, 1181, 101));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(940, 10, 191, 71));
        pushButton_5->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4a6f8b; /* Couleur de fond par d\303\251faut */\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 15px;\n"
"    color: #f4f5f9;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, transform 0.3s;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ff8c42; /* Couleur orange lors du survol */\n"
"    transform: scale(1.05);\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff8c42; /* Couleur orange lors de l'appui */\n"
"    transform: scale(0.95);\n"
"}\n"
""));
        pushButton_5->setIconSize(QSize(130, 130));
        pushButton_5->setCheckable(false);
        icones = new QLabel(frame);
        icones->setObjectName("icones");
        icones->setGeometry(QRect(0, 0, 1181, 101));
        icones->setStyleSheet(QString::fromUtf8("#icones {\n"
"    background-color: #f4f5f9; /* Couleur de fond proche du blanc cass\303\251 */\n"
"    border: 2px solid #ff8c42\n"
";  \n"
"    border-radius: 10px; /* Conserve la bordure arrondie */\n"
"    padding: 5px; /* Conserve le padding pour un meilleur rendu */\n"
"}\n"
""));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(330, 10, 191, 71));
        pushButton_3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff8c42; /* Couleur de fond par d\303\251faut */\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 15px;\n"
"    color: #f4f5f9;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, transform 0.3s;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ff8c42; /* Couleur orange lors du survol */\n"
"    transform: scale(1.05);\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff8c42; /* Couleur orange lors de l'appui */\n"
"    transform: scale(0.95);\n"
"}\n"
""));
        pushButton_3->setIconSize(QSize(70, 80));
        pushButton_3->setCheckable(false);
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 10, 191, 71));
        pushButton_6->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4a6f8b; /* Couleur de fond par d\303\251faut */\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 15px;\n"
"    color: #f4f5f9;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, transform 0.3s;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ff8c42; /* Couleur orange lors du survol */\n"
"    transform: scale(1.05);\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff8c42; /* Couleur orange lors de l'appui */\n"
"    transform: scale(0.95);\n"
"}\n"
""));
        pushButton_6->setIconSize(QSize(50, 50));
        pushButton_6->setCheckable(false);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(540, 10, 191, 71));
        pushButton_2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4a6f8b; /* Couleur de fond par d\303\251faut */\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 15px;\n"
"    color: #f4f5f9;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, transform 0.3s;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ff8c42; /* Couleur orange lors du survol */\n"
"    transform: scale(1.05);\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff8c42; /* Couleur orange lors de l'appui */\n"
"    transform: scale(0.95);\n"
"}\n"
""));
        pushButton_2->setIconSize(QSize(80, 80));
        pushButton_2->setCheckable(false);
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(740, 10, 181, 71));
        pushButton_4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4a6f8b; /* Couleur de fond par d\303\251faut */\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 15px;\n"
"    color: #f4f5f9;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, transform 0.3s;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ff8c42; /* Couleur orange lors du survol */\n"
"    transform: scale(1.05);\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff8c42; /* Couleur orange lors de l'appui */\n"
"    transform: scale(0.95);\n"
"}\n"
""));
        pushButton_4->setIconSize(QSize(70, 80));
        pushButton_4->setCheckable(false);
        icones->raise();
        pushButton_3->raise();
        pushButton_6->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(10, 110, 1521, 731));
        tabWidget_2->setStyleSheet(QString::fromUtf8("#crud {\n"
"    background-color: #4a6f8b;\n"
"}\n"
"#stat {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        crud = new QWidget();
        crud->setObjectName("crud");
        rech = new QPushButton(crud);
        rech->setObjectName("rech");
        rech->setGeometry(QRect(1020, 10, 121, 41));
        QPalette palette;
        QBrush brush(QColor(26, 49, 55, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(244, 245, 249, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(49, 164, 180, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush3(QColor(26, 49, 55, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush4(QColor(26, 49, 55, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush5(QColor(26, 49, 55, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        rech->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        rech->setFont(font);
        rech->setStyleSheet(QString::fromUtf8("#rech {\n"
"  background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#rech:hover {\n"
"     background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        frame_2 = new QFrame(crud);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 20, 671, 551));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        icones_8 = new QLabel(frame_2);
        icones_8->setObjectName("icones_8");
        icones_8->setGeometry(QRect(0, 0, 671, 551));
        icones_8->setStyleSheet(QString::fromUtf8("#icones_8 {\n"
"    background-color: #f4f5f9; /* Couleur de fond proche du blanc cass\303\251 */\n"
"    border: 2px solid #ff8c42\n"
";  \n"
"    border-radius: 10px; /* Conserve la bordure arrondie */\n"
"    padding: 5px; /* Conserve le padding pour un meilleur rendu */\n"
"}\n"
""));
        ajout = new QPushButton(frame_2);
        ajout->setObjectName("ajout");
        ajout->setGeometry(QRect(130, 380, 171, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush6(QColor(26, 49, 55, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush7(QColor(26, 49, 55, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush8(QColor(26, 49, 55, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        ajout->setPalette(palette1);
        ajout->setFont(font);
        ajout->setStyleSheet(QString::fromUtf8("#ajout {\n"
" background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#ajout:hover {\n"
"     background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        id = new QLineEdit(frame_2);
        id->setObjectName("id");
        id->setGeometry(QRect(70, 120, 241, 41));
        id->setStyleSheet(QString::fromUtf8("#id{\n"
"\n"
"   background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}"));
        id->setMaxLength(8);
        prixl = new QLineEdit(frame_2);
        prixl->setObjectName("prixl");
        prixl->setGeometry(QRect(320, 120, 241, 41));
        prixl->setStyleSheet(QString::fromUtf8("#prixl{\n"
" background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}"));
        prixl->setMaxLength(8);
        modif = new QPushButton(frame_2);
        modif->setObjectName("modif");
        modif->setGeometry(QRect(310, 380, 191, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush9(QColor(26, 49, 55, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush10(QColor(26, 49, 55, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush11(QColor(26, 49, 55, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        modif->setPalette(palette2);
        modif->setFont(font);
        modif->setStyleSheet(QString::fromUtf8("#modif {\n"
"     background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#modif:hover {\n"
"     background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        prixl_4 = new QLineEdit(frame_2);
        prixl_4->setObjectName("prixl_4");
        prixl_4->setGeometry(QRect(70, 300, 241, 41));
        prixl_4->setStyleSheet(QString::fromUtf8("#prixl_4{\n"
"\n"
"    background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}"));
        prixl_4->setMaxLength(8);
        prixc = new QLineEdit(frame_2);
        prixc->setObjectName("prixc");
        prixc->setGeometry(QRect(70, 180, 241, 41));
        prixc->setStyleSheet(QString::fromUtf8("#prixc {\n"
"    background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}\n"
""));
        prixc->setMaxLength(8);
        prixl_2 = new QLineEdit(frame_2);
        prixl_2->setObjectName("prixl_2");
        prixl_2->setGeometry(QRect(320, 180, 241, 41));
        prixl_2->setStyleSheet(QString::fromUtf8("#prixl_2{\n"
"\n"
"  background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}"));
        prixl_2->setMaxLength(8);
        prixl_5 = new QLineEdit(frame_2);
        prixl_5->setObjectName("prixl_5");
        prixl_5->setGeometry(QRect(320, 240, 241, 41));
        prixl_5->setStyleSheet(QString::fromUtf8("#prixl_5{\n"
"\n"
"   background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}"));
        prixl_5->setMaxLength(8);
        prixl_3 = new QLineEdit(frame_2);
        prixl_3->setObjectName("prixl_3");
        prixl_3->setGeometry(QRect(70, 240, 241, 41));
        prixl_3->setStyleSheet(QString::fromUtf8("#prixl_3{\n"
"\n"
"  background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}"));
        prixl_3->setMaxLength(8);
        prixl_6 = new QLineEdit(frame_2);
        prixl_6->setObjectName("prixl_6");
        prixl_6->setGeometry(QRect(320, 300, 241, 41));
        prixl_6->setStyleSheet(QString::fromUtf8("#prixl_6{\n"
"\n"
"    background-color: #819fb4;\n"
"    border: none;\n"
"    border-bottom: 2px solid #819fb4;\n"
"    padding-bottom: 7px;\n"
"    selection-background-color: #1a3137;\n"
"    border-radius: 10px;\n"
"}"));
        prixl_6->setMaxLength(8);
        icones_8->raise();
        ajout->raise();
        id->raise();
        prixl->raise();
        modif->raise();
        prixl_4->raise();
        prixc->raise();
        prixl_2->raise();
        prixl_3->raise();
        prixl_5->raise();
        prixl_6->raise();
        supprimer = new QPushButton(crud);
        supprimer->setObjectName("supprimer");
        supprimer->setGeometry(QRect(1150, 10, 111, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush12(QColor(26, 49, 55, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush13(QColor(26, 49, 55, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush14(QColor(26, 49, 55, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        supprimer->setPalette(palette3);
        supprimer->setFont(font);
        supprimer->setStyleSheet(QString::fromUtf8("#supprimer {\n"
"  background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#supprimer:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tableView = new QTableView(crud);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(680, 110, 831, 461));
        tableView->setStyleSheet(QString::fromUtf8("#tableView {\n"
"    background-color: #f4f5f9; /* Light off-white background */\n"
"    border: 2px solid #ff8c42; /* Border with a light orange color */\n"
"    border-radius: 10px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the table */\n"
"    color: #1a3137; /* Dark blue text color */\n"
"}\n"
""));
        recherche = new QLineEdit(crud);
        recherche->setObjectName("recherche");
        recherche->setGeometry(QRect(800, 40, 191, 41));
        recherche->setStyleSheet(QString::fromUtf8("#recherche {\n"
"    background-color: #f6f6f6;\n"
"    border: 2px solid #ff8c42;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"#recherche::selection {\n"
"    background-color: #ff8c42;\n"
"}\n"
""));
        recherche->setMaxLength(8);
        afficher = new QPushButton(crud);
        afficher->setObjectName("afficher");
        afficher->setGeometry(QRect(1020, 60, 371, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush15(QColor(26, 49, 55, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush16(QColor(26, 49, 55, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush17(QColor(26, 49, 55, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        afficher->setPalette(palette4);
        afficher->setFont(font);
        afficher->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        exporter = new QPushButton(crud);
        exporter->setObjectName("exporter");
        exporter->setGeometry(QRect(1270, 10, 121, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush18(QColor(26, 49, 55, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush19(QColor(26, 49, 55, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush20(QColor(26, 49, 55, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush20);
#endif
        exporter->setPalette(palette5);
        exporter->setFont(font);
        exporter->setStyleSheet(QString::fromUtf8("#exporter {\n"
"  background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#supprimer:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri = new QPushButton(crud);
        tri->setObjectName("tri");
        tri->setGeometry(QRect(700, 110, 101, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush21(QColor(26, 49, 55, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush21);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush22(QColor(26, 49, 55, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush23(QColor(26, 49, 55, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        tri->setPalette(palette6);
        tri->setFont(font);
        tri->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri_nom = new QPushButton(crud);
        tri_nom->setObjectName("tri_nom");
        tri_nom->setGeometry(QRect(800, 110, 101, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush24(QColor(26, 49, 55, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush24);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush25(QColor(26, 49, 55, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush26(QColor(26, 49, 55, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        tri_nom->setPalette(palette7);
        tri_nom->setFont(font);
        tri_nom->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri_statut = new QPushButton(crud);
        tri_statut->setObjectName("tri_statut");
        tri_statut->setGeometry(QRect(900, 110, 101, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush27(QColor(26, 49, 55, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush28(QColor(26, 49, 55, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush28);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush29(QColor(26, 49, 55, 128));
        brush29.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush29);
#endif
        tri_statut->setPalette(palette8);
        tri_statut->setFont(font);
        tri_statut->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri_salaire = new QPushButton(crud);
        tri_salaire->setObjectName("tri_salaire");
        tri_salaire->setGeometry(QRect(1000, 110, 101, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush30(QColor(26, 49, 55, 128));
        brush30.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush30);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush31(QColor(26, 49, 55, 128));
        brush31.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush32(QColor(26, 49, 55, 128));
        brush32.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush32);
#endif
        tri_salaire->setPalette(palette9);
        tri_salaire->setFont(font);
        tri_salaire->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri_poste = new QPushButton(crud);
        tri_poste->setObjectName("tri_poste");
        tri_poste->setGeometry(QRect(1100, 110, 101, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush33(QColor(26, 49, 55, 128));
        brush33.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush33);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush34(QColor(26, 49, 55, 128));
        brush34.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush34);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush35(QColor(26, 49, 55, 128));
        brush35.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush35);
#endif
        tri_poste->setPalette(palette10);
        tri_poste->setFont(font);
        tri_poste->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri_diplome = new QPushButton(crud);
        tri_diplome->setObjectName("tri_diplome");
        tri_diplome->setGeometry(QRect(1200, 110, 101, 41));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush36(QColor(26, 49, 55, 128));
        brush36.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush36);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush37(QColor(26, 49, 55, 128));
        brush37.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush37);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush38(QColor(26, 49, 55, 128));
        brush38.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush38);
#endif
        tri_diplome->setPalette(palette11);
        tri_diplome->setFont(font);
        tri_diplome->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri_points = new QPushButton(crud);
        tri_points->setObjectName("tri_points");
        tri_points->setGeometry(QRect(1300, 110, 101, 41));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush39(QColor(26, 49, 55, 128));
        brush39.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush39);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush40(QColor(26, 49, 55, 128));
        brush40.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush40);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush41(QColor(26, 49, 55, 128));
        brush41.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush41);
#endif
        tri_points->setPalette(palette12);
        tri_points->setFont(font);
        tri_points->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tri_conge = new QPushButton(crud);
        tri_conge->setObjectName("tri_conge");
        tri_conge->setGeometry(QRect(1400, 110, 111, 41));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush42(QColor(26, 49, 55, 128));
        brush42.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush42);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush43(QColor(26, 49, 55, 128));
        brush43.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush43);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush44(QColor(26, 49, 55, 128));
        brush44.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush44);
#endif
        tri_conge->setPalette(palette13);
        tri_conge->setFont(font);
        tri_conge->setStyleSheet(QString::fromUtf8("#afficher {\n"
"    background-color: #f4f5f9;\n"
"    border: 2px solid #1a3137;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: #1a3137;\n"
"    font-size: 16px;\n"
"    transition: background-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"#afficher:hover {\n"
"    background-color: #7a96a8;\n"
"    color: #f4f5f9;\n"
"    cursor: pointer;\n"
"}\n"
""));
        tabWidget_2->addTab(crud, QString());
        stat = new QWidget();
        stat->setObjectName("stat");
        gridLayoutWidget = new QWidget(stat);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(190, 30, 941, 481));
        layout = new QGridLayout(gridLayoutWidget);
        layout->setObjectName("layout");
        layout->setContentsMargins(0, 0, 0, 0);
        tabWidget_2->addTab(stat, QString());
        tabWidget->addTab(tab, QString());

        retranslateUi(employe);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(employe);
    } // setupUi

    void retranslateUi(QWidget *employe)
    {
        employe->setWindowTitle(QCoreApplication::translate("employe", "employe", nullptr));
        pushButton_5->setText(QCoreApplication::translate("employe", "Reclammations", nullptr));
        icones->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("employe", "Employees", nullptr));
        pushButton_6->setText(QCoreApplication::translate("employe", "Clients", nullptr));
        pushButton_2->setText(QCoreApplication::translate("employe", "Fournisseurs", nullptr));
        pushButton_4->setText(QCoreApplication::translate("employe", "Produits", nullptr));
        rech->setText(QCoreApplication::translate("employe", "Rechercher", nullptr));
        icones_8->setText(QString());
        ajout->setText(QCoreApplication::translate("employe", "Ajouter", nullptr));
        id->setPlaceholderText(QCoreApplication::translate("employe", "ID", nullptr));
        prixl->setPlaceholderText(QCoreApplication::translate("employe", "Poste    ", nullptr));
        modif->setText(QCoreApplication::translate("employe", "Modifier", nullptr));
        prixl_4->setPlaceholderText(QCoreApplication::translate("employe", "salaire", nullptr));
        prixc->setPlaceholderText(QCoreApplication::translate("employe", "Nom et Prenom", nullptr));
        prixl_2->setPlaceholderText(QCoreApplication::translate("employe", "diplome", nullptr));
        prixl_5->setPlaceholderText(QCoreApplication::translate("employe", "Point", nullptr));
        prixl_3->setPlaceholderText(QCoreApplication::translate("employe", "statut", nullptr));
        prixl_6->setPlaceholderText(QCoreApplication::translate("employe", "Nombre de cong\303\251s", nullptr));
        supprimer->setText(QCoreApplication::translate("employe", "Supprimer", nullptr));
        recherche->setInputMask(QString());
        recherche->setPlaceholderText(QCoreApplication::translate("employe", "ID de recherche", nullptr));
        afficher->setText(QCoreApplication::translate("employe", "Afficher", nullptr));
        exporter->setText(QCoreApplication::translate("employe", "Eporter", nullptr));
        tri->setText(QCoreApplication::translate("employe", "ID", nullptr));
        tri_nom->setText(QCoreApplication::translate("employe", "Nom", nullptr));
        tri_statut->setText(QCoreApplication::translate("employe", "Statut", nullptr));
        tri_salaire->setText(QCoreApplication::translate("employe", "Salaire", nullptr));
        tri_poste->setText(QCoreApplication::translate("employe", "Poste", nullptr));
        tri_diplome->setText(QCoreApplication::translate("employe", "Diplome", nullptr));
        tri_points->setText(QCoreApplication::translate("employe", "Points", nullptr));
        tri_conge->setText(QCoreApplication::translate("employe", "Nombre cong\303\251", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(crud), QCoreApplication::translate("employe", "Crud", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(stat), QCoreApplication::translate("employe", "Statistiques", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("employe", "Tab 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employe: public Ui_employe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYE_H
