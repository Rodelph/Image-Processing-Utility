/****************************************************************************
** Meta object code from reading C++ file 'filterswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/FiltOption/filterswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filterswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FiltersWindow_t {
    QByteArrayData data[8];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FiltersWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FiltersWindow_t qt_meta_stringdata_FiltersWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FiltersWindow"
QT_MOC_LITERAL(1, 14, 17), // "on_retBtn_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "on_hpBtn_clicked"
QT_MOC_LITERAL(4, 50, 16), // "on_lpBtn_clicked"
QT_MOC_LITERAL(5, 67, 18), // "on_freqBtn_clicked"
QT_MOC_LITERAL(6, 86, 17), // "on_medBtn_clicked"
QT_MOC_LITERAL(7, 104, 19) // "on_treshBtn_clicked"

    },
    "FiltersWindow\0on_retBtn_clicked\0\0"
    "on_hpBtn_clicked\0on_lpBtn_clicked\0"
    "on_freqBtn_clicked\0on_medBtn_clicked\0"
    "on_treshBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FiltersWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FiltersWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FiltersWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_retBtn_clicked(); break;
        case 1: _t->on_hpBtn_clicked(); break;
        case 2: _t->on_lpBtn_clicked(); break;
        case 3: _t->on_freqBtn_clicked(); break;
        case 4: _t->on_medBtn_clicked(); break;
        case 5: _t->on_treshBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FiltersWindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_FiltersWindow.data,
    qt_meta_data_FiltersWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FiltersWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FiltersWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FiltersWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FiltersWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
