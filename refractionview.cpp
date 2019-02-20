#include "refractionview.h"

RefractionView::RefractionView(QWidget *parent)
    : QWidget(parent)
{
    m_defaultAngleMeasurementUnit = radians;
    m_usesCustomColors = false;

    m_incidenceAngle = 0.0;
    m_refractionAngle = 0.0;

    m_displayIncidentRay = m_displayReflectedRay = m_displayRefractedRay = m_displayIncidentRayPropagation = true;

    m_backgroundColor = Qt::white;
    m_borderColor = m_normalColor = m_surfaceColor = m_incidentRayColor = m_reflectedRayColor = m_refractedRayColor = Qt::black;
    m_incidentRayPropagationColor = Qt::gray;
}

RefractionView::~RefractionView()
{
}

QSize RefractionView::sizeHint() const
{
    return QSize(minimumWidth, minimumHeight);
}

RefractionView::angleMeasurementUnit RefractionView::getDefaultAngleMeasurementUnit() const
{
    return m_defaultAngleMeasurementUnit;
}

bool RefractionView::getUsesCustomColors() const
{
    return m_usesCustomColors;
}

void RefractionView::setDefaultAngleMeasurementUnit(angleMeasurementUnit newUnit)
{
    m_defaultAngleMeasurementUnit = newUnit;
}

void RefractionView::setUsesCustomColors(bool newUCC)
{
    if (m_usesCustomColors != newUCC)
    {
        m_usesCustomColors = newUCC;
        update();
    }
}

double RefractionView::getIncidenceAngle() const
{
    return m_incidenceAngle;
}

double RefractionView::getRefractionAngle() const
{
    return m_refractionAngle;
}

void RefractionView::setIncidenceAngle(double new_incidenceAngle)
{
    if (m_defaultAngleMeasurementUnit == degrees)
    {
        if (new_incidenceAngle >= 0.0 && new_incidenceAngle <= 90.0)
        {
            m_incidenceAngle = new_incidenceAngle;
            update();
        }
    }
    else
    {
        if (new_incidenceAngle >= 0.0 && new_incidenceAngle <= 2 * M_PI)
        {
            m_incidenceAngle = new_incidenceAngle;
            update();
        }
    }
}

void RefractionView::setRefractionAngle(double new_refractionAngle)
{
    if (m_defaultAngleMeasurementUnit == degrees)
    {
        if (new_refractionAngle >= 0.0 && new_refractionAngle <= 90.0)
        {
            m_refractionAngle = new_refractionAngle;
            update();
        }
    }
    else
    {
        if (new_refractionAngle >= 0.0 && new_refractionAngle <= 2 * M_PI)
        {
            m_refractionAngle = new_refractionAngle;
            update();
        }
    }
}

bool RefractionView::getDisplayIncidentRay() const
{
    return m_displayIncidentRay;
}

bool RefractionView::getDisplayReflectedRay() const
{
    return m_displayReflectedRay;
}

bool RefractionView::getDisplayRefractedRay() const
{
    return m_displayRefractedRay;
}

bool RefractionView::getDisplayIncidentRayPropagation() const
{
    return m_displayIncidentRayPropagation;
}

void RefractionView::setDisplayIncidentRay(bool new_displayIncidentRay)
{
    if (m_displayIncidentRay != new_displayIncidentRay)
    {
        m_displayIncidentRay = new_displayIncidentRay;
        update();
    }
}

void RefractionView::setDisplayReflectedRay(bool new_displayReflectedRay)
{
    if (m_displayReflectedRay != new_displayReflectedRay)
    {
        m_displayReflectedRay = new_displayReflectedRay;
        update();
    }
}

void RefractionView::setDisplayRefractedRay(bool new_displayRefractedRay)
{
    if (m_displayRefractedRay != new_displayRefractedRay)
    {
        m_displayRefractedRay = new_displayRefractedRay;
        update();
    }
}

void RefractionView::setDisplayIncidentRayPropagation(bool new_displayIncidentRayPropagation)
{
    if (m_displayIncidentRayPropagation != new_displayIncidentRayPropagation)
    {
        m_displayIncidentRayPropagation = new_displayIncidentRayPropagation;
        update();
    }
}

QColor RefractionView::getBackgroundColor() const
{
    return m_backgroundColor;
}

QColor RefractionView::getBorderColor() const
{
    return m_borderColor;
}

QColor RefractionView::getNormalColor() const
{
    return m_normalColor;
}

QColor RefractionView::getSurfaceColor() const
{
    return m_surfaceColor;
}

QColor RefractionView::getIncidentRayColor() const
{
    return m_incidentRayColor;
}

QColor RefractionView::getReflectedRayColor() const
{
    return m_reflectedRayColor;
}

QColor RefractionView::getRefractedRayColor() const
{
    return m_refractedRayColor;
}

QColor RefractionView::getIncidentRayPropagationColor() const
{
    return m_incidentRayPropagationColor;
}

void RefractionView::setBackgroundColor(const QColor &new_backgroundColor)
{
    if (m_backgroundColor != new_backgroundColor)
    {
        m_backgroundColor = new_backgroundColor;
        update();
    }
}

void RefractionView::setBorderColor(const QColor &new_borderColor)
{
    if (m_borderColor != new_borderColor)
    {
        m_borderColor = new_borderColor;
        update();
    }
}

void RefractionView::setNormalColor(const QColor &new_normalColor)
{
    if (m_normalColor != new_normalColor)
    {
        m_normalColor = new_normalColor;
        update();
    }
}

void RefractionView::setSurfaceColor(const QColor &new_surfaceColor)
{
    if (m_surfaceColor != new_surfaceColor)
    {
        m_surfaceColor = new_surfaceColor;
        update();
    }
}

void RefractionView::setIncidentRayColor(const QColor &new_incidentRayColor)
{
    if (m_incidentRayColor != new_incidentRayColor)
    {
        m_incidentRayColor = new_incidentRayColor;
        update();
    }
}

void RefractionView::setReflectedRayColor(const QColor &new_reflectedRayColor)
{
    if (m_reflectedRayColor != new_reflectedRayColor)
    {
        m_reflectedRayColor = new_reflectedRayColor;
        update();
    }
}

void RefractionView::setRefractedRayColor(const QColor &new_refractedRayColor)
{
    if (m_refractedRayColor != new_refractedRayColor)
    {
        m_refractedRayColor = new_refractedRayColor;
        update();
    }
}

void RefractionView::setIncidentRayPropagationColor(const QColor &new_incidentRayPropagationColor)
{
    if (m_incidentRayPropagationColor != new_incidentRayPropagationColor)
    {
        m_incidentRayPropagationColor = new_incidentRayPropagationColor;
        update();
    }
}

void RefractionView::paintEvent(QPaintEvent *event)
{
    if (m_usesCustomColors)
    {
        finalBackgroundColor = m_backgroundColor;
        finalBorderColor = m_borderColor;
        finalNormalColor = m_normalColor;
        finalSurfaceColor = m_surfaceColor;
        finalIncidentRayColor = m_incidentRayColor;
        finalReflectedRayColor = m_reflectedRayColor;
        finalRefractedRayColor = m_refractedRayColor;
        finalIncidentRayPropagationColor = m_incidentRayPropagationColor;
    }
    else
    {
        finalBackgroundColor = palette().background().color();
        finalBorderColor = finalNormalColor = finalSurfaceColor = finalIncidentRayColor = finalReflectedRayColor = finalRefractedRayColor = palette().foreground().color();
        finalIncidentRayPropagationColor = palette().dark().color();
    }
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    // Background
    painter.fillRect(1, 1, width() - 2, height() - 2, finalBackgroundColor);
    // Rays
    int halfWidth = width() / 2;
    int halfHeight = height() / 2;
    int left, top;
    double diagonalLength = qSqrt(halfWidth * halfWidth + halfHeight * halfHeight);
    // Incident ray
    if (m_displayIncidentRay)
    {
        painter.setPen(finalIncidentRayColor);
        double incidenceAngleRadians = m_defaultAngleMeasurementUnit == degrees ? m_incidenceAngle * M_PI / 180 : m_incidenceAngle;
        if (incidenceAngleRadians <= qAsin(halfWidth / diagonalLength))
        {
            left = qRound(halfWidth - halfWidth * qSin(incidenceAngleRadians) * diagonalLength / halfWidth);
            top = 0;
        }
        else
        {
            left = 0;
            top = qRound(halfHeight - halfHeight * qSin(M_PI_2 - incidenceAngleRadians) * diagonalLength / halfHeight);
        }
        painter.drawLine(halfWidth, halfHeight, left, top);
    }
    // Reflected ray
    if (m_displayReflectedRay)
    {
        painter.setPen(finalReflectedRayColor);
        double reflectedAngleRadians = m_defaultAngleMeasurementUnit == degrees ? m_incidenceAngle * M_PI / 180 : m_incidenceAngle;
        if (reflectedAngleRadians <= qAsin(halfWidth / diagonalLength))
        {
            left = qRound(halfWidth + halfWidth * qSin(reflectedAngleRadians) * diagonalLength / halfWidth);
            top = 0;
        }
        else
        {
            left = width();
            top = qRound(halfHeight - halfHeight * qSin(M_PI_2 - reflectedAngleRadians) * diagonalLength / halfHeight);
        }
        painter.drawLine(halfWidth, halfHeight, left, top);
    }
    // Refracted ray
    if (m_displayRefractedRay)
    {
        painter.setPen(finalRefractedRayColor);
        double refractedAngleRadians = m_defaultAngleMeasurementUnit == degrees ? m_refractionAngle * M_PI / 180 : m_refractionAngle;
        if (refractedAngleRadians <= qAsin(halfWidth / diagonalLength))
        {
            left = qRound(halfWidth + halfWidth * qSin(refractedAngleRadians) * diagonalLength / halfWidth);
            top = height();
        }
        else
        {
            left = width();
            top = qRound(halfHeight + halfHeight * qSin(M_PI_2 - refractedAngleRadians) * diagonalLength / halfHeight);
        }
        painter.drawLine(halfWidth, halfHeight, left, top);
    }
    // Incident ray propagation
    if (m_displayIncidentRayPropagation)
    {
        painter.setPen(finalIncidentRayPropagationColor);
        double incidenceAngleRadians = m_defaultAngleMeasurementUnit == degrees ? m_incidenceAngle * M_PI / 180 : m_incidenceAngle;
        if (incidenceAngleRadians <= qAsin(halfWidth / diagonalLength))
        {
            left = qRound(halfWidth + halfWidth * qSin(incidenceAngleRadians) * diagonalLength / halfWidth);
            top = height();
        }
        else
        {
            left = width();
            top = qRound(halfHeight + halfHeight * qSin(M_PI_2 - incidenceAngleRadians) * diagonalLength / halfHeight);
        }
        painter.drawLine(halfWidth, halfHeight, left, top);
    }
    // Border
    painter.setPen(finalBorderColor);
    painter.drawRect(0, 0, width() - 1, height() - 1);
    // Normal
    painter.setPen(finalNormalColor);
    painter.drawLine(width() / 2, 1, width() / 2, height() - 2);
    // Surface
    painter.setPen(finalSurfaceColor);
    painter.drawLine(1, height() / 2, width() - 2, height() / 2);
}
