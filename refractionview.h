#ifndef REFRACTIONVIEW_H
#define REFRACTIONVIEW_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <qmath.h>

class RefractionView : public QWidget
{
    Q_OBJECT

    Q_PROPERTY(angleMeasurementUnit defaultAngleMeasurementUnit READ getDefaultAngleMeasurementUnit WRITE setDefaultAngleMeasurementUnit)
    Q_PROPERTY(bool usesCustomColors READ getUsesCustomColors WRITE setUsesCustomColors);

    Q_PROPERTY(double incidenceAngle READ getIncidenceAngle WRITE setIncidenceAngle)
    Q_PROPERTY(double refractionAngle READ getRefractionAngle WRITE setRefractionAngle)

    Q_PROPERTY(bool displayIncidentRay READ getDisplayIncidentRay WRITE setDisplayIncidentRay)
    Q_PROPERTY(bool displayReflectedRay READ getDisplayReflectedRay WRITE setDisplayReflectedRay)
    Q_PROPERTY(bool displayRefractedRay READ getDisplayRefractedRay WRITE setDisplayRefractedRay)
    Q_PROPERTY(bool displayIncidentRayPropagation READ getDisplayIncidentRayPropagation WRITE setDisplayIncidentRayPropagation)

    Q_PROPERTY(QColor backgroundColor READ getBackgroundColor WRITE setBackgroundColor)
    Q_PROPERTY(QColor borderColor READ getBorderColor WRITE setBorderColor)
    Q_PROPERTY(QColor normalColor READ getNormalColor WRITE setNormalColor)
    Q_PROPERTY(QColor surfaceColor READ getSurfaceColor WRITE setSurfaceColor)
    Q_PROPERTY(QColor incidentRayColor READ getIncidentRayColor WRITE setIncidentRayColor)
    Q_PROPERTY(QColor reflectedRayColor READ getReflectedRayColor WRITE setReflectedRayColor)
    Q_PROPERTY(QColor refractedRayColor READ getRefractedRayColor WRITE setRefractedRayColor)
    Q_PROPERTY(QColor incidentRayPropagationColor READ getIncidentRayPropagationColor WRITE setIncidentRayPropagationColor)

public:
    enum {minimumWidth = 200, minimumHeight = 200};
    enum angleMeasurementUnit {degrees = 0, radians = 1};
    explicit RefractionView(QWidget *parent = 0);
    virtual ~RefractionView();
    QSize sizeHint() const;

    angleMeasurementUnit getDefaultAngleMeasurementUnit() const;
    bool getUsesCustomColors() const;
    void setDefaultAngleMeasurementUnit(angleMeasurementUnit newUnit);
    void setUsesCustomColors(bool newUCC);

    double getIncidenceAngle() const;
    double getRefractionAngle() const;
    void setIncidenceAngle(double new_incidenceAngle);
    void setRefractionAngle(double new_refractionAngle);

    bool getDisplayIncidentRay() const;
    bool getDisplayReflectedRay() const;
    bool getDisplayRefractedRay() const;
    bool getDisplayIncidentRayPropagation() const;
    void setDisplayIncidentRay(bool new_displayIncidentRay);
    void setDisplayReflectedRay(bool new_displayReflectedRay);
    void setDisplayRefractedRay(bool new_displayRefractedRay);
    void setDisplayIncidentRayPropagation(bool new_displayIncidentRayPropagation);

    QColor getBackgroundColor() const;
    QColor getBorderColor() const;
    QColor getNormalColor() const;
    QColor getSurfaceColor() const;
    QColor getIncidentRayColor() const;
    QColor getReflectedRayColor() const;
    QColor getRefractedRayColor() const;
    QColor getIncidentRayPropagationColor() const;
    void setBackgroundColor(const QColor &new_backgroundColor);
    void setBorderColor(const QColor &new_borderColor);
    void setNormalColor(const QColor &new_normalColor);
    void setSurfaceColor(const QColor &new_surfaceColor);
    void setIncidentRayColor(const QColor &new_incidentRayColor);
    void setReflectedRayColor(const QColor &new_reflectedRayColor);
    void setRefractedRayColor(const QColor &new_refractedRayColor);
    void setIncidentRayPropagationColor(const QColor &new_incidentRayPropagationColor);

protected:
    void paintEvent(QPaintEvent *event);

private:
    angleMeasurementUnit m_defaultAngleMeasurementUnit;
    bool m_usesCustomColors;

    double m_incidenceAngle;
    double m_refractionAngle;

    bool m_displayIncidentRay;
    bool m_displayReflectedRay;
    bool m_displayRefractedRay;
    bool m_displayIncidentRayPropagation;

    QColor m_backgroundColor;
    QColor m_borderColor;
    QColor m_normalColor;
    QColor m_surfaceColor;
    QColor m_incidentRayColor;
    QColor m_reflectedRayColor;
    QColor m_refractedRayColor;
    QColor m_incidentRayPropagationColor;

    QColor finalBackgroundColor;
    QColor finalBorderColor;
    QColor finalNormalColor;
    QColor finalSurfaceColor;
    QColor finalIncidentRayColor;
    QColor finalReflectedRayColor;
    QColor finalRefractedRayColor;
    QColor finalIncidentRayPropagationColor;
};

#endif
