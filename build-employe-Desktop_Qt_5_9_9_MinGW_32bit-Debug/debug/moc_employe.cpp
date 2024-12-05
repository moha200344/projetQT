/****************************************************************************
** Meta object code from reading C++ file 'employe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../employe/employe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_employe_t {
    QByteArrayData data[20];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_employe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_employe_t qt_meta_stringdata_employe = {
    {
QT_MOC_LITERAL(0, 0, 7), // "employe"
QT_MOC_LITERAL(1, 8, 16), // "on_ajout_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "clearFields"
QT_MOC_LITERAL(4, 38, 19), // "on_afficher_clicked"
QT_MOC_LITERAL(5, 58, 16), // "on_modif_clicked"
QT_MOC_LITERAL(6, 75, 20), // "on_supprimer_clicked"
QT_MOC_LITERAL(7, 96, 15), // "on_rech_clicked"
QT_MOC_LITERAL(8, 112, 29), // "on_tabWidget_2_currentChanged"
QT_MOC_LITERAL(9, 142, 5), // "index"
QT_MOC_LITERAL(10, 148, 28), // "on_tabWidget_2_tabBarClicked"
QT_MOC_LITERAL(11, 177, 19), // "on_exporter_clicked"
QT_MOC_LITERAL(12, 197, 14), // "on_tri_clicked"
QT_MOC_LITERAL(13, 212, 18), // "on_tri_nom_clicked"
QT_MOC_LITERAL(14, 231, 21), // "on_tri_statut_clicked"
QT_MOC_LITERAL(15, 253, 22), // "on_tri_salaire_clicked"
QT_MOC_LITERAL(16, 276, 20), // "on_tri_poste_clicked"
QT_MOC_LITERAL(17, 297, 22), // "on_tri_diplome_clicked"
QT_MOC_LITERAL(18, 320, 21), // "on_tri_points_clicked"
QT_MOC_LITERAL(19, 342, 20) // "on_tri_conge_clicked"

    },
    "employe\0on_ajout_clicked\0\0clearFields\0"
    "on_afficher_clicked\0on_modif_clicked\0"
    "on_supprimer_clicked\0on_rech_clicked\0"
    "on_tabWidget_2_currentChanged\0index\0"
    "on_tabWidget_2_tabBarClicked\0"
    "on_exporter_clicked\0on_tri_clicked\0"
    "on_tri_nom_clicked\0on_tri_statut_clicked\0"
    "on_tri_salaire_clicked\0on_tri_poste_clicked\0"
    "on_tri_diplome_clicked\0on_tri_points_clicked\0"
    "on_tri_conge_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_employe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    1,  105,    2, 0x08 /* Private */,
      10,    1,  108,    2, 0x08 /* Private */,
      11,    0,  111,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    0,  113,    2, 0x08 /* Private */,
      14,    0,  114,    2, 0x08 /* Private */,
      15,    0,  115,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void employe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        employe *_t = static_cast<employe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajout_clicked(); break;
        case 1: _t->clearFields(); break;
        case 2: _t->on_afficher_clicked(); break;
        case 3: _t->on_modif_clicked(); break;
        case 4: _t->on_supprimer_clicked(); break;
        case 5: _t->on_rech_clicked(); break;
        case 6: _t->on_tabWidget_2_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_tabWidget_2_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_exporter_clicked(); break;
        case 9: _t->on_tri_clicked(); break;
        case 10: _t->on_tri_nom_clicked(); break;
        case 11: _t->on_tri_statut_clicked(); break;
        case 12: _t->on_tri_salaire_clicked(); break;
        case 13: _t->on_tri_poste_clicked(); break;
        case 14: _t->on_tri_diplome_clicked(); break;
        case 15: _t->on_tri_points_clicked(); break;
        case 16: _t->on_tri_conge_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject employe::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_employe.data,
      qt_meta_data_employe,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *employe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *employe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_employe.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int employe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
