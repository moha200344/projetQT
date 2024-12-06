/****************************************************************************
** Meta object code from reading C++ file 'employe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../employe.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7employeE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7employeE = QtMocHelpers::stringData(
    "employe",
    "on_ajout_clicked",
    "",
    "clearFields",
    "on_afficher_clicked",
    "on_modif_clicked",
    "isCodeExists",
    "code",
    "on_supprimer_clicked",
    "on_rech_clicked",
    "on_tabWidget_2_currentChanged",
    "index",
    "on_tabWidget_2_tabBarClicked",
    "on_exporter_clicked",
    "on_tri_clicked",
    "on_tri_nom_clicked",
    "on_tri_statut_clicked",
    "on_tri_salaire_clicked",
    "on_tri_poste_clicked",
    "on_tri_diplome_clicked",
    "on_tri_points_clicked",
    "on_tri_conge_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7employeE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x08,    1 /* Private */,
       3,    0,  123,    2, 0x08,    2 /* Private */,
       4,    0,  124,    2, 0x08,    3 /* Private */,
       5,    0,  125,    2, 0x08,    4 /* Private */,
       6,    1,  126,    2, 0x08,    5 /* Private */,
       8,    0,  129,    2, 0x08,    7 /* Private */,
       9,    0,  130,    2, 0x08,    8 /* Private */,
      10,    1,  131,    2, 0x08,    9 /* Private */,
      12,    1,  134,    2, 0x08,   11 /* Private */,
      13,    0,  137,    2, 0x08,   13 /* Private */,
      14,    0,  138,    2, 0x08,   14 /* Private */,
      15,    0,  139,    2, 0x08,   15 /* Private */,
      16,    0,  140,    2, 0x08,   16 /* Private */,
      17,    0,  141,    2, 0x08,   17 /* Private */,
      18,    0,  142,    2, 0x08,   18 /* Private */,
      19,    0,  143,    2, 0x08,   19 /* Private */,
      20,    0,  144,    2, 0x08,   20 /* Private */,
      21,    0,  145,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
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

Q_CONSTINIT const QMetaObject employe::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7employeE.offsetsAndSizes,
    qt_meta_data_ZN7employeE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7employeE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<employe, std::true_type>,
        // method 'on_ajout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearFields'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_afficher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modif_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isCodeExists'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'on_supprimer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rech_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tabWidget_2_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tabWidget_2_tabBarClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_exporter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_nom_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_statut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_salaire_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_poste_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_diplome_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_points_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tri_conge_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void employe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<employe *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_ajout_clicked(); break;
        case 1: _t->clearFields(); break;
        case 2: _t->on_afficher_clicked(); break;
        case 3: _t->on_modif_clicked(); break;
        case 4: { QString _r = _t->isCodeExists((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_supprimer_clicked(); break;
        case 6: _t->on_rech_clicked(); break;
        case 7: _t->on_tabWidget_2_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_tabWidget_2_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_exporter_clicked(); break;
        case 10: _t->on_tri_clicked(); break;
        case 11: _t->on_tri_nom_clicked(); break;
        case 12: _t->on_tri_statut_clicked(); break;
        case 13: _t->on_tri_salaire_clicked(); break;
        case 14: _t->on_tri_poste_clicked(); break;
        case 15: _t->on_tri_diplome_clicked(); break;
        case 16: _t->on_tri_points_clicked(); break;
        case 17: _t->on_tri_conge_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *employe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *employe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7employeE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int employe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
