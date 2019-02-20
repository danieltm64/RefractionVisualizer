/****************************************************************************
** Meta object code from reading C++ file 'refractionview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../refractionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'refractionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RefractionView_t {
    QByteArrayData data[18];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RefractionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RefractionView_t qt_meta_stringdata_RefractionView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RefractionView"
QT_MOC_LITERAL(1, 15, 27), // "defaultAngleMeasurementUnit"
QT_MOC_LITERAL(2, 43, 20), // "angleMeasurementUnit"
QT_MOC_LITERAL(3, 64, 16), // "usesCustomColors"
QT_MOC_LITERAL(4, 81, 14), // "incidenceAngle"
QT_MOC_LITERAL(5, 96, 15), // "refractionAngle"
QT_MOC_LITERAL(6, 112, 18), // "displayIncidentRay"
QT_MOC_LITERAL(7, 131, 19), // "displayReflectedRay"
QT_MOC_LITERAL(8, 151, 19), // "displayRefractedRay"
QT_MOC_LITERAL(9, 171, 29), // "displayIncidentRayPropagation"
QT_MOC_LITERAL(10, 201, 15), // "backgroundColor"
QT_MOC_LITERAL(11, 217, 11), // "borderColor"
QT_MOC_LITERAL(12, 229, 11), // "normalColor"
QT_MOC_LITERAL(13, 241, 12), // "surfaceColor"
QT_MOC_LITERAL(14, 254, 16), // "incidentRayColor"
QT_MOC_LITERAL(15, 271, 17), // "reflectedRayColor"
QT_MOC_LITERAL(16, 289, 17), // "refractedRayColor"
QT_MOC_LITERAL(17, 307, 27) // "incidentRayPropagationColor"

    },
    "RefractionView\0defaultAngleMeasurementUnit\0"
    "angleMeasurementUnit\0usesCustomColors\0"
    "incidenceAngle\0refractionAngle\0"
    "displayIncidentRay\0displayReflectedRay\0"
    "displayRefractedRay\0displayIncidentRayPropagation\0"
    "backgroundColor\0borderColor\0normalColor\0"
    "surfaceColor\0incidentRayColor\0"
    "reflectedRayColor\0refractedRayColor\0"
    "incidentRayPropagationColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RefractionView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      16,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, QMetaType::Bool, 0x00095103,
       4, QMetaType::Double, 0x00095103,
       5, QMetaType::Double, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QColor, 0x00095103,
      14, QMetaType::QColor, 0x00095103,
      15, QMetaType::QColor, 0x00095103,
      16, QMetaType::QColor, 0x00095103,
      17, QMetaType::QColor, 0x00095103,

       0        // eod
};

void RefractionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        RefractionView *_t = static_cast<RefractionView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< angleMeasurementUnit*>(_v) = _t->getDefaultAngleMeasurementUnit(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getUsesCustomColors(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getIncidenceAngle(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getRefractionAngle(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getDisplayIncidentRay(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getDisplayReflectedRay(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getDisplayRefractedRay(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getDisplayIncidentRayPropagation(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->getNormalColor(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->getSurfaceColor(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = _t->getIncidentRayColor(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = _t->getReflectedRayColor(); break;
        case 14: *reinterpret_cast< QColor*>(_v) = _t->getRefractedRayColor(); break;
        case 15: *reinterpret_cast< QColor*>(_v) = _t->getIncidentRayPropagationColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RefractionView *_t = static_cast<RefractionView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultAngleMeasurementUnit(*reinterpret_cast< angleMeasurementUnit*>(_v)); break;
        case 1: _t->setUsesCustomColors(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIncidenceAngle(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setRefractionAngle(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setDisplayIncidentRay(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setDisplayReflectedRay(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDisplayRefractedRay(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDisplayIncidentRayPropagation(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 9: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setNormalColor(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setSurfaceColor(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->setIncidentRayColor(*reinterpret_cast< QColor*>(_v)); break;
        case 13: _t->setReflectedRayColor(*reinterpret_cast< QColor*>(_v)); break;
        case 14: _t->setRefractedRayColor(*reinterpret_cast< QColor*>(_v)); break;
        case 15: _t->setIncidentRayPropagationColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RefractionView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_RefractionView.data,
    qt_meta_data_RefractionView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RefractionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RefractionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RefractionView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RefractionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
