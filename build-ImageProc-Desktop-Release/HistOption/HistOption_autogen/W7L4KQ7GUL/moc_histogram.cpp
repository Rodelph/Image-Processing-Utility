/****************************************************************************
** Meta object code from reading C++ file 'histogram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/HistOption/histogram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'histogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_histogram_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_histogram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_histogram_t qt_meta_stringdata_histogram = {
    {
QT_MOC_LITERAL(0, 0, 9), // "histogram"
QT_MOC_LITERAL(1, 10, 18), // "on_filtBtn_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "on_calcBtn_clicked"
QT_MOC_LITERAL(4, 49, 7), // "calc_gs"
QT_MOC_LITERAL(5, 57, 8), // "calc_rgb"
QT_MOC_LITERAL(6, 66, 7), // "calc_eq"
QT_MOC_LITERAL(7, 74, 16), // "on_radGs_clicked"
QT_MOC_LITERAL(8, 91, 16), // "on_radEq_clicked"
QT_MOC_LITERAL(9, 108, 17), // "on_radRgb_clicked"
QT_MOC_LITERAL(10, 126, 18) // "on_foldBtn_clicked"

    },
    "histogram\0on_filtBtn_clicked\0\0"
    "on_calcBtn_clicked\0calc_gs\0calc_rgb\0"
    "calc_eq\0on_radGs_clicked\0on_radEq_clicked\0"
    "on_radRgb_clicked\0on_foldBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_histogram[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,

       0        // eod
};

void histogram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<histogram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_filtBtn_clicked(); break;
        case 1: _t->on_calcBtn_clicked(); break;
        case 2: _t->calc_gs(); break;
        case 3: _t->calc_rgb(); break;
        case 4: _t->calc_eq(); break;
        case 5: { bool _r = _t->on_radGs_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->on_radEq_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->on_radRgb_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->on_foldBtn_clicked();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject histogram::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_histogram.data,
    qt_meta_data_histogram,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *histogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *histogram::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_histogram.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int histogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
