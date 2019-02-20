#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTranslator>
#include <QStyleFactory>
#include <QClipboard>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum language {en_US, pt_BR};
    enum angle {incidence, refraction};

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void retranslateUi();
    void setStandardStyle();
    void setFusionStyle(const QString &color = "");
    void on_radioButton_speed1_clicked();
    void on_radioButton_refractiveIndex1_clicked();
    void on_radioButton_speed2_clicked();
    void on_radioButton_refractiveIndex2_clicked();
    void on_actionEnglishUS_triggered();
    void on_actionPortuguesBrasil_triggered();
    void on_actionStyleStandard_triggered();
    void on_actionStyleFusion_triggered();
    void on_actionStyleFusionDarkWithGreen_triggered();
    void on_actionStyleFusionDarkWithYellow_triggered();
    void on_actionStyleFusionDarkWithBlue_triggered();
    void on_actionStyleFusionDarkWithOrange_triggered();
    void on_actionDisplayIncidentRay_triggered();
    void on_actionDisplayReflectedRay_triggered();
    void on_actionDisplayRefractedRay_triggered();
    void on_actionDisplayIncidentRayPropagation_triggered();
    void on_actionAbout_triggered();
    void on_pushButton_calculate_clicked();
    void on_pushButton_copyResult_clicked();

private:
    Ui::MainWindow *ui;
    language m_currentLanguage;
    QTranslator m_translator;
    QTranslator m_translatorQt;
    QString m_aboutMessage;

    double m_c;
    double m_lastResult;
    QString m_lastError;
    QString lastError();
    void setLastError(const QString &errorMessage);
    void appendToMessage(QString &message, const QString &text);
    double degreesToRadians(double degrees);
    double radiansToDegrees(double radians);
    double incidenceAngleInDegrees();
    double incidenceAngleInRadians();
    double refractionAngleInDegrees();
    double refractionAngleInRadians();
    bool validateSpeed(double speed);
    bool validateRefractiveIndex(double refractiveIndex);
    bool validateAngleInDegrees(double angle);
    bool validateAngleInRadians(double angle);
    QString validateBothAngles();
    double speedToRefractiveIndex(double speed);
    double refractiveIndexToSpeed(double refractiveIndex);
    double calculateRefractiveIndex(int medium);
    double calculateSpeed(int medium);
    double calculateAngleSin(angle a);
    double calculateAngle(angle a);
};

#endif // MAINWINDOW_H
