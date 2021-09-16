/****************************************************************************
** Meta object code from reading C++ file 'treshfilt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/TreshFilt/treshfilt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treshfilt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_treshfilt_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_treshfilt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_treshfilt_t qt_meta_stringdata_treshfilt = {
    {
QT_MOC_LITERAL(0, 0, 9), // "treshfilt"
QT_MOC_LITERAL(1, 10, 17), // "on_retBtn_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "on_transBtn_clicked"
QT_MOC_LITERAL(4, 49, 26), // "on_treshSlide_valueChanged"
QT_MOC_LITERAL(5, 76, 5), // "value"
QT_MOC_LITERAL(6, 82, 18) // "on_foldBtn_clicked"

    },
    "treshfilt\0on_retBtn_clicked\0\0"
    "on_transBtn_clicked\0on_treshSlide_valueChanged\0"
    "value\0on_foldBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_treshfilt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::QString,

       0        // eod
};

void treshfilt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<treshfilt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_retBtn_clicked(); break;
        case 1: _t->on_transBtn_clicked(); break;
        case 2: _t->on_treshSlide_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { QString _r = _t->on_foldBtn_clicked();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject treshfilt::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_treshfilt.data,
    qt_meta_data_treshfilt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *treshfilt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *treshfilt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_treshfilt.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int treshfilt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
