/****************************************************************************
** Meta object code from reading C++ file 'sOSingleLineEdit.hpp'
**
** Created: So 27. Aug 20:59:37 2006
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sOSingleLineEdit.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sOSingleLineEdit.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_OSingleLineEdit[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      29,   16,   16,   16, 0x08,
      40,   16,   16,   16, 0x08,
      52,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OSingleLineEdit[] = {
    "OSingleLineEdit\0\0ClearData()\0FillData()\0initValue()\0storeToValue()\0"
};

const QMetaObject OSingleLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_OSingleLineEdit,
      qt_meta_data_OSingleLineEdit, 0 }
};

const QMetaObject *OSingleLineEdit::metaObject() const
{
    return &staticMetaObject;
}

void *OSingleLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OSingleLineEdit))
	return static_cast<void*>(const_cast<OSingleLineEdit*>(this));
    if (!strcmp(_clname, "OEHControlValue"))
	return static_cast<OEHControlValue*>(const_cast<OSingleLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int OSingleLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ClearData(); break;
        case 1: FillData(); break;
        case 2: initValue(); break;
        case 3: storeToValue(); break;
        }
        _id -= 4;
    }
    return _id;
}
