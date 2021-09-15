/****************************************************************************
** Meta object code from reading C++ file 'lowpassfilt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/LowPassFilt/lowpassfilt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lowpassfilt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lowpassfilt_t {
    QByteArrayData data[8];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lowpassfilt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lowpassfilt_t qt_meta_stringdata_lowpassfilt = {
    {
QT_MOC_LITERAL(0, 0, 11), // "lowpassfilt"
QT_MOC_LITERAL(1, 12, 17), // "on_retBtn_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "on_transBtn_clicked"
QT_MOC_LITERAL(4, 51, 18), // "on_confBtn_clicked"
QT_MOC_LITERAL(5, 70, 16), // "on_x3rad_clicked"
QT_MOC_LITERAL(6, 87, 16), // "on_x5rad_clicked"
QT_MOC_LITERAL(7, 104, 18) // "on_foldBtn_clicked"

    },
    "lowpassfilt\0on_retBtn_clicked\0\0"
    "on_transBtn_clicked\0on_confBtn_clicked\0"
    "on_x3rad_clicked\0on_x5rad_clicked\0"
    "on_foldBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lowpassfilt[] = {

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
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,

       0        // eod
};

void lowpassfilt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<lowpassfilt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_retBtn_clicked(); break;
        case 1: _t->on_transBtn_clicked(); break;
        case 2: _t->on_confBtn_clicked(); break;
        case 3: { bool _r = _t->on_x3rad_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->on_x5rad_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->on_foldBtn_clicked();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject lowpassfilt::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_lowpassfilt.data,
    qt_meta_data_lowpassfilt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lowpassfilt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lowpassfilt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lowpassfilt.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lowpassfilt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
