#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_c(299792458.0)
    , m_currentLanguage(en_US)
{
    ui->setupUi(this);
    ui->refractionView->setDefaultAngleMeasurementUnit(RefractionView::degrees);
    ui->radioButton_speed1->click();
    ui->radioButton_speed2->click();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
    retranslateUi();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::retranslateUi()
{
    ui->menuLanguage->setTitle(tr("Language", "retranslateUi"));
    ui->actionEnglishUS->setText("English (US)");
    ui->actionPortuguesBrasil->setText("Português (Brasil)");

    ui->menuStyle->setTitle(tr("Style", "retranslateUi"));
    ui->actionStyleStandard->setText(tr("Standard", "retranslateUi"));
    ui->actionStyleFusion->setText(tr("Fusion", "retranslateUi"));
    ui->actionStyleFusionDarkWithGreen->setText(tr("Fusion (dark with green)", "retranslateUi"));
    ui->actionStyleFusionDarkWithYellow->setText(tr("Fusion (dark with yellow)", "retranslateUi"));
    ui->actionStyleFusionDarkWithBlue->setText(tr("Fusion (dark with blue)", "retranslateUi"));
    ui->actionStyleFusionDarkWithOrange->setText(tr("Fusion (dark with orange)", "retranslateUi"));

    ui->menuDiagram->setTitle(tr("Diagram", "retranslateUi"));
    ui->actionDisplayIncidentRay->setText(tr("Display incident ray", "retranslateUi"));
    ui->actionDisplayReflectedRay->setText(tr("Display reflected ray", "retranslateUi"));
    ui->actionDisplayRefractedRay->setText(tr("Display refracted ray", "retranslateUi"));
    ui->actionDisplayIncidentRayPropagation->setText(tr("Display incident ray propagation", "retranslateUi"));

    ui->menuHelp->setTitle(tr("Help", "retranslateUi"));
    ui->actionAbout->setText(tr("About", "retranslateUi"));

    ui->groupBox_medium1->setTitle(tr("Medium 1 (top)", "retranslateUi"));
    ui->radioButton_speed1->setText(tr("Speed of light in medium 1 (m/s):", "retranslateUi"));
    ui->radioButton_refractiveIndex1->setText(tr("Refractive index of medium 1:", "retranslateUi"));

    ui->groupBox_medium2->setTitle(tr("Medium 2 (bottom)", "retranslateUi"));
    ui->radioButton_speed2->setText(tr("Speed of light in medium 2 (m/s):", "retranslateUi"));
    ui->radioButton_refractiveIndex2->setText(tr("Refractive index of medium 2:", "retranslateUi"));

    ui->groupBox_mediums12->setTitle(tr("Mediums 1 and 2", "retranslateUi"));
    ui->label_incidenceAngle->setText(tr("Angle of Incidence:", "retranslateUi"));
    ui->label_refractionAngle->setText(tr("Angle of Refraction:", "retranslateUi"));
    ui->comboBox_incidenceAngle->clear();
    ui->comboBox_incidenceAngle->addItem(tr("Degrees", "retranslateUi"));
    ui->comboBox_incidenceAngle->addItem(tr("Radians", "retranslateUi"));

    ui->groupBox_whatToCalculate->setTitle(tr("What To Calculate", "retranslateUi"));
    ui->comboBox_whatToCalculate->clear();
    ui->comboBox_whatToCalculate->addItem(tr("Refractive index of medium 1", "retranslateUi"));
    ui->comboBox_whatToCalculate->addItem(tr("Refractive index of medium 2", "retranslateUi"));
    ui->comboBox_whatToCalculate->addItem(tr("Speed of light in medium 1", "retranslateUi"));
    ui->comboBox_whatToCalculate->addItem(tr("Speed of light in medium 2", "retranslateUi"));
    ui->comboBox_whatToCalculate->addItem(tr("Sine of angle of incidence", "retranslateUi"));
    ui->comboBox_whatToCalculate->addItem(tr("Sine of angle of refraction", "retranslateUi"));
    ui->comboBox_whatToCalculate->addItem(tr("Angle of incidence", "retranslateUi"));
    ui->comboBox_whatToCalculate->addItem(tr("Angle of refraction", "retranslateUi"));

    ui->pushButton_calculate->setText(tr("Calculate", "retranslateUi"));
    ui->pushButton_copyResult->setText(tr("Copy Result", "retranslateUi"));

    m_aboutMessage = tr("Refraction Visualizer 1.0<br />(C) 2009-2019 Daniel Telles McGinnis<br /><a href=\"https://github.com/danieltm64\">https://github.com/danieltm64</a><br /><br /><strong>License</strong><br />Refraction Visualizer is free and open source software available<br />under the GNU Affero General Public License version 3 as published<br />by the Free Software Foundation. <a href=\"agplv3.html\">View full license</a>", "retranslateUi");
}

void MainWindow::setStandardStyle()
{
    qApp->setStyle(QStyleFactory::create("windowsvista"));
    qApp->setPalette(qApp->style()->standardPalette());
}

void MainWindow::setFusionStyle(const QString &color)
{
    qApp->setStyle(QStyleFactory::create("fusion"));
    if (color.isEmpty())
        qApp->setPalette(qApp->style()->standardPalette());
    else
    {
        QPalette palette(qApp->palette());
        palette.setColor(QPalette::Window, QColor(53, 53, 53));
        palette.setColor(QPalette::Button, QColor(53, 53, 53));
        palette.setColor(QPalette::ButtonText, QColor(color));
        palette.setColor(QPalette::WindowText, QColor(color));
        palette.setColor(QPalette::Base, QColor(53, 53, 53));
        palette.setColor(QPalette::Text, QColor(color));
        palette.setColor(QPalette::HighlightedText, QColor("yellow"));
        palette.setColor(QPalette::Highlight, QColor("black"));
        palette.setColor(QPalette::Link, QColor("teal"));
        palette.setColor(QPalette::LinkVisited, QColor("teal"));
        qApp->setPalette(palette);
    }
}

void MainWindow::on_radioButton_speed1_clicked()
{
    ui->doubleSpinBox_speed1->setVisible(true);
    ui->doubleSpinBox_refractiveIndex1->setVisible(false);
}

void MainWindow::on_radioButton_refractiveIndex1_clicked()
{
    ui->doubleSpinBox_speed1->setVisible(false);
    ui->doubleSpinBox_refractiveIndex1->setVisible(true);
}

void MainWindow::on_radioButton_speed2_clicked()
{
    ui->doubleSpinBox_speed2->setVisible(true);
    ui->doubleSpinBox_refractiveIndex2->setVisible(false);
}

void MainWindow::on_radioButton_refractiveIndex2_clicked()
{
    ui->doubleSpinBox_speed2->setVisible(false);
    ui->doubleSpinBox_refractiveIndex2->setVisible(true);
}

void MainWindow::on_actionEnglishUS_triggered()
{
    if (m_currentLanguage != en_US)
    {
        qApp->removeTranslator(&m_translatorQt);
        qApp->removeTranslator(&m_translator);
        QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
        retranslateUi();
        m_currentLanguage = en_US;
        ui->actionEnglishUS->setChecked(true);
        ui->actionPortuguesBrasil->setChecked(false);
    }
}

void MainWindow::on_actionPortuguesBrasil_triggered()
{
    if (m_currentLanguage != pt_BR)
    {
        m_translator.load("RefractionVisualizer_pt_BR.qm");
        m_translatorQt.load("qt_pt.qm");
        qApp->installTranslator(&m_translator);
        qApp->installTranslator(&m_translatorQt);
        QLocale::setDefault(QLocale(QLocale::Portuguese, QLocale::Brazil));
        retranslateUi();
        m_currentLanguage = pt_BR;
        ui->actionEnglishUS->setChecked(false);
        ui->actionPortuguesBrasil->setChecked(true);
    }
}

void MainWindow::on_actionStyleStandard_triggered()
{
    setStandardStyle();
    ui->actionStyleStandard->setChecked(true);
    ui->actionStyleFusion->setChecked(false);
    ui->actionStyleFusionDarkWithGreen->setChecked(false);
    ui->actionStyleFusionDarkWithYellow->setChecked(false);
    ui->actionStyleFusionDarkWithBlue->setChecked(false);
    ui->actionStyleFusionDarkWithOrange->setChecked(false);
}

void MainWindow::on_actionStyleFusion_triggered()
{
    setFusionStyle();
    ui->actionStyleStandard->setChecked(false);
    ui->actionStyleFusion->setChecked(true);
    ui->actionStyleFusionDarkWithGreen->setChecked(false);
    ui->actionStyleFusionDarkWithYellow->setChecked(false);
    ui->actionStyleFusionDarkWithBlue->setChecked(false);
    ui->actionStyleFusionDarkWithOrange->setChecked(false);
}

void MainWindow::on_actionStyleFusionDarkWithGreen_triggered()
{
    setFusionStyle("lime");
    ui->actionStyleStandard->setChecked(false);
    ui->actionStyleFusion->setChecked(false);
    ui->actionStyleFusionDarkWithGreen->setChecked(true);
    ui->actionStyleFusionDarkWithYellow->setChecked(false);
    ui->actionStyleFusionDarkWithBlue->setChecked(false);
    ui->actionStyleFusionDarkWithOrange->setChecked(false);
}

void MainWindow::on_actionStyleFusionDarkWithYellow_triggered()
{
    setFusionStyle("yellow");
    ui->actionStyleStandard->setChecked(false);
    ui->actionStyleFusion->setChecked(false);
    ui->actionStyleFusionDarkWithGreen->setChecked(false);
    ui->actionStyleFusionDarkWithYellow->setChecked(true);
    ui->actionStyleFusionDarkWithBlue->setChecked(false);
    ui->actionStyleFusionDarkWithOrange->setChecked(false);
}

void MainWindow::on_actionStyleFusionDarkWithBlue_triggered()
{
    setFusionStyle("cyan");
    ui->actionStyleStandard->setChecked(false);
    ui->actionStyleFusion->setChecked(false);
    ui->actionStyleFusionDarkWithGreen->setChecked(false);
    ui->actionStyleFusionDarkWithYellow->setChecked(false);
    ui->actionStyleFusionDarkWithBlue->setChecked(true);
    ui->actionStyleFusionDarkWithOrange->setChecked(false);
}

void MainWindow::on_actionStyleFusionDarkWithOrange_triggered()
{
    setFusionStyle("orange");
    ui->actionStyleStandard->setChecked(false);
    ui->actionStyleFusion->setChecked(false);
    ui->actionStyleFusionDarkWithGreen->setChecked(false);
    ui->actionStyleFusionDarkWithYellow->setChecked(false);
    ui->actionStyleFusionDarkWithBlue->setChecked(false);
    ui->actionStyleFusionDarkWithOrange->setChecked(true);
}

void MainWindow::on_actionDisplayIncidentRay_triggered()
{
    ui->refractionView->setDisplayIncidentRay(ui->actionDisplayIncidentRay->isChecked());
}

void MainWindow::on_actionDisplayReflectedRay_triggered()
{
    ui->refractionView->setDisplayReflectedRay(ui->actionDisplayReflectedRay->isChecked());
}

void MainWindow::on_actionDisplayRefractedRay_triggered()
{
    ui->refractionView->setDisplayRefractedRay(ui->actionDisplayRefractedRay->isChecked());
}

void MainWindow::on_actionDisplayIncidentRayPropagation_triggered()
{
    ui->refractionView->setDisplayIncidentRayPropagation(ui->actionDisplayIncidentRayPropagation->isChecked());
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox aboutDialog;
    aboutDialog.setWindowTitle("Refraction Visualizer");
    aboutDialog.setText(m_aboutMessage);
    aboutDialog.setTextFormat(Qt::RichText);
    aboutDialog.setStandardButtons(QMessageBox::Ok);
    aboutDialog.exec();
}

void MainWindow::on_pushButton_calculate_clicked()
{
    switch (ui->comboBox_whatToCalculate->currentIndex())
    {
    case 0:
        m_lastResult = calculateRefractiveIndex(1);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f'));
        ui->refractionView->setIncidenceAngle(incidenceAngleInDegrees());
        ui->refractionView->setRefractionAngle(refractionAngleInDegrees());
        break;
    case 1:
        m_lastResult = calculateRefractiveIndex(2);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f'));
        ui->refractionView->setIncidenceAngle(incidenceAngleInDegrees());
        ui->refractionView->setRefractionAngle(refractionAngleInDegrees());
        break;
    case 2:
        m_lastResult = calculateSpeed(1);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f'));
        ui->refractionView->setIncidenceAngle(incidenceAngleInDegrees());
        ui->refractionView->setRefractionAngle(refractionAngleInDegrees());
        break;
    case 3:
        m_lastResult = calculateSpeed(2);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f'));
        ui->refractionView->setIncidenceAngle(incidenceAngleInDegrees());
        ui->refractionView->setRefractionAngle(refractionAngleInDegrees());
        break;
    case 4:
        m_lastResult = calculateAngleSin(incidence);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f'));
        ui->refractionView->setIncidenceAngle(radiansToDegrees(qAsin(m_lastResult)));
        ui->refractionView->setRefractionAngle(refractionAngleInDegrees());
        break;
    case 5:
        m_lastResult = calculateAngleSin(refraction);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f'));
        ui->refractionView->setIncidenceAngle(incidenceAngleInDegrees());
        ui->refractionView->setRefractionAngle(radiansToDegrees(qAsin(m_lastResult)));
        break;
    case 6:
        m_lastResult = calculateAngle(incidence);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f') + " rad\n" + QString::number(m_lastResult * 180 / M_PI, 'f') + 'º');
        ui->refractionView->setIncidenceAngle(radiansToDegrees(m_lastResult));
        ui->refractionView->setRefractionAngle(refractionAngleInDegrees());
        break;
    case 7:
        m_lastResult = calculateAngle(refraction);
        if (m_lastResult == -1)
            ui->label_output->setText(lastError());
        else
            ui->label_output->setText(QString::number(m_lastResult, 'f') + " rad\n" + QString::number(m_lastResult * 180 / M_PI, 'f') + 'º');
        ui->refractionView->setIncidenceAngle(incidenceAngleInDegrees());
        ui->refractionView->setRefractionAngle(radiansToDegrees(m_lastResult));
        break;
    }
}

void MainWindow::on_pushButton_copyResult_clicked()
{
    qApp->clipboard()->setText(ui->label_output->text());
}

QString MainWindow::lastError()
{
    return m_lastError;
}

void MainWindow::setLastError(const QString &errorMessage)
{
    m_lastError = errorMessage;
}

void MainWindow::appendToMessage(QString &message, const QString &text)
{
    if (!message.isEmpty())
        message += '\n';
    message += text;
}

double MainWindow::degreesToRadians(double degrees)
{
    return degrees* M_PI / 180;
}

double MainWindow::radiansToDegrees(double radians)
{
    return radians * 180 / M_PI;
}

double MainWindow::incidenceAngleInDegrees()
{
    if (ui->comboBox_incidenceAngle->currentIndex() == 0)
        return ui->doubleSpinBox_incidenceAngle->value();
    else
        return ui->doubleSpinBox_incidenceAngle->value() * 180 / M_PI;
}

double MainWindow::incidenceAngleInRadians()
{
    if (ui->comboBox_incidenceAngle->currentIndex() == 0)
        return ui->doubleSpinBox_incidenceAngle->value() * M_PI / 180;
    else
        return ui->doubleSpinBox_incidenceAngle->value();
}

double MainWindow::refractionAngleInDegrees()
{
    if (ui->comboBox_refractionAngle->currentIndex() == 0)
        return ui->doubleSpinBox_refractionAngle->value();
    else
        return ui->doubleSpinBox_refractionAngle->value() * 180 / M_PI;
}

double MainWindow::refractionAngleInRadians()
{
    if (ui->comboBox_refractionAngle->currentIndex() == 0)
        return ui->doubleSpinBox_refractionAngle->value() * M_PI / 180;
    else
        return ui->doubleSpinBox_refractionAngle->value();
}

bool MainWindow::validateSpeed(double speed)
{
    return speed > 0 && speed <= m_c;
}

bool MainWindow::validateRefractiveIndex(double refractiveIndex)
{
    return refractiveIndex >= 1;
}

bool MainWindow::validateAngleInDegrees(double angle)
{
    return angle >= 0.0 && angle < 90.0;
}

bool MainWindow::validateAngleInRadians(double angle)
{
    return angle >= 0.0 && angle < M_PI_4;
}

QString MainWindow::validateBothAngles()
{
    if (ui->doubleSpinBox_incidenceAngle->value() == 0 && ui->doubleSpinBox_refractionAngle->value() != 0)
        return tr("If the angle of incidence is zero, the angle of refraction can only be zero.", "relevant");
    else if (ui->doubleSpinBox_incidenceAngle->value() != 0 && ui->doubleSpinBox_refractionAngle->value() == 0)
            return tr("If the angle of refraction is zero, the angle of incidence can only be zero.", "relevant");
    else if (ui->doubleSpinBox_incidenceAngle->value() == 0 && ui->doubleSpinBox_refractionAngle->value() == 0)
        return tr("It is not possible to calculate the answer if the angles of incidence and of refraction are both zero.", "relevant");
    else
        return "";
}

double MainWindow::speedToRefractiveIndex(double speed)
{
    return m_c / speed;
}

double MainWindow::refractiveIndexToSpeed(double refractiveIndex)
{
    return m_c / refractiveIndex;
}

double MainWindow::calculateRefractiveIndex(int medium)
{
    QString errorMessage = "";
    // validate input on the other medium
    int otherMedium;
    bool otherMediumSpeedIsValid = true;
    bool otherMediumRefractiveIndexIsValid = true;
    if (medium == 1)
    {
        otherMedium = 2;
        if (ui->radioButton_speed2->isChecked())
        {
            if (validateSpeed(ui->doubleSpinBox_speed2->value()) == false)
                otherMediumSpeedIsValid = false;
        }
        else
        {
            if (validateRefractiveIndex(ui->doubleSpinBox_refractiveIndex2->value()) == false)
                otherMediumRefractiveIndexIsValid = false;
        }
    }
    else
    {
        otherMedium = 1;
        if (ui->radioButton_speed1->isChecked())
        {
            if (validateSpeed(ui->doubleSpinBox_speed1->value()) == false)
                otherMediumSpeedIsValid = false;
        }
        else
        {
            if (validateRefractiveIndex(ui->doubleSpinBox_refractiveIndex1->value()) == false)
                otherMediumRefractiveIndexIsValid = false;
        }
    }
    if (otherMediumSpeedIsValid == false)
        appendToMessage(errorMessage, tr("The speed of light in medium %1 must be greater than 0 m/s and less than or equal to %2 m/s.", "relevant").arg(otherMedium).arg(QString::number(m_c, 'f', 0)));
    else if (otherMediumRefractiveIndexIsValid == false)
        appendToMessage(errorMessage, tr("The refractive index of medium %1 must be greater than or equal to 1.", "relevant").arg(otherMedium));
    // validate angle of incidence
    if (ui->comboBox_incidenceAngle->currentIndex() == 0)
    {
        if (validateAngleInDegrees(incidenceAngleInDegrees()) == false)
            appendToMessage(errorMessage, tr("The angle of incidence must be greater than or equal to 0 degrees and less than 90 degrees.", "relevant"));
    }
    else
    {
        if (validateAngleInRadians(incidenceAngleInRadians()) == false)
            appendToMessage(errorMessage, tr("The angle of incidence must be greater than or equal to 0 radians and less than pi/4 radians.", "relevant"));
    }
    // validate angle of refraction
    if (ui->comboBox_refractionAngle->currentIndex() == 0)
    {
        if (validateAngleInDegrees(refractionAngleInDegrees()) == false)
            appendToMessage(errorMessage, tr("The angle of refraction must be greater than or equal to 0 degrees and less than 90 degrees.", "relevant"));
    }
    else
    {
        if (validateAngleInRadians(refractionAngleInRadians()) == false)
            appendToMessage(errorMessage, tr("The angle of refraction must be greater than or equal to 0 radians and less than pi/4 radians.", "relevant"));
    }
    // validate both angles
    QString validationBothAngles = validateBothAngles();
    if (!validationBothAngles.isEmpty())
        appendToMessage(errorMessage, validationBothAngles);
    double refractiveIndexMedium1;
    double refractiveIndexMedium2;
    QString errorSpeed = tr("The speed of light in medium %1 would have to be greater than the speed of light in vacuum for the angles of incidence and of refraction and the speed of light in medium %2 to remain as specified. Since this is impossible, the input values are inconsistent.", "relevant").arg(medium).arg(otherMedium);
    QString errorRefractiveIndex = tr("The speed of light in medium %1 would have to be greater than the speed of light in vacuum for the angles of incidence and of refraction and the refractive index of medium %2 to remain as specified. Since this is impossible, the input values are inconsistent.", "relevant").arg(medium).arg(otherMedium);
    if (medium == 1)
    {
        // snell-descartes
        refractiveIndexMedium2 = (ui->radioButton_speed2->isChecked() ? speedToRefractiveIndex(ui->doubleSpinBox_speed2->value()) : ui->doubleSpinBox_refractiveIndex2->value());
        refractiveIndexMedium1 = (refractiveIndexMedium2 * qSin(refractionAngleInRadians())) / qSin(incidenceAngleInRadians());
        if (refractiveIndexMedium1 < 1)
            appendToMessage(errorMessage, ui->radioButton_speed2->isChecked() ? errorSpeed : errorRefractiveIndex);
        setLastError(errorMessage);
        if (!errorMessage.isEmpty())
            return -1;
        return refractiveIndexMedium1;
    }
    else
    {
        // snell-descartes
        refractiveIndexMedium1 = (ui->radioButton_speed1->isChecked() ? speedToRefractiveIndex(ui->doubleSpinBox_speed1->value()) : ui->doubleSpinBox_refractiveIndex1->value());
        refractiveIndexMedium2 = (refractiveIndexMedium1 * qSin(incidenceAngleInRadians())) / qSin(refractionAngleInRadians());
        if (refractiveIndexMedium2 < 1)
            appendToMessage(errorMessage, ui->radioButton_speed1->isChecked() ? errorSpeed : errorRefractiveIndex);
        setLastError(errorMessage);
        if (!errorMessage.isEmpty())
            return -1;
        return refractiveIndexMedium2;
    }
    return 0;
}

double MainWindow::calculateSpeed(int medium)
{
    double refractiveIndex = calculateRefractiveIndex(medium);
    return refractiveIndex == -1 ? -1 : refractiveIndexToSpeed(refractiveIndex);
}

double MainWindow::calculateAngleSin(MainWindow::angle a)
{
    // sen i = (n2 * sen r') / n1
    // sen r' = (n1 * sen i) / n2
    QString errorMessage = "";
    double refractiveIndexMedium1;
    double refractiveIndexMedium2;
    // validate medium 1
    if (ui->radioButton_speed1->isChecked())
    {
        if (validateSpeed(ui->doubleSpinBox_speed1->value()) == false)
            appendToMessage(errorMessage, tr("The speed of light in medium %1 must be greater than 0 m/s and less than or equal to %2 m/s.", "relevant").arg(1).arg(QString::number(m_c, 'f', 0)));
        else
            refractiveIndexMedium1 = speedToRefractiveIndex(ui->doubleSpinBox_speed1->value());
    }
    else
    {
        if (validateRefractiveIndex(ui->doubleSpinBox_refractiveIndex1->value()) == false)
            appendToMessage(errorMessage, tr("The refractive index of medium %1 must be greater than or equal to 1.", "relevant").arg(1));
        else
            refractiveIndexMedium1 = ui->doubleSpinBox_refractiveIndex1->value();
    }
    // validate medium 2
    if (ui->radioButton_speed2->isChecked())
    {
        if (validateSpeed(ui->doubleSpinBox_speed2->value()) == false)
            appendToMessage(errorMessage, tr("The speed of light in medium %1 must be greater than 0 m/s and less than or equal to %2 m/s.", "relevant").arg(2).arg(QString::number(m_c, 'f', 0)));
        else
            refractiveIndexMedium2 = speedToRefractiveIndex(ui->doubleSpinBox_speed2->value());
    }
    else
    {
        if (validateRefractiveIndex(ui->doubleSpinBox_refractiveIndex2->value()) == false)
            appendToMessage(errorMessage, tr("The refractive index of medium %1 must be greater than or equal to 1.", "relevant").arg(2));
        else
            refractiveIndexMedium2 = ui->doubleSpinBox_refractiveIndex2->value();
    }
    double answer;
    if (a == incidence)
    {
        // validate angle of refraction
        if (ui->comboBox_refractionAngle->currentIndex() == 0)
        {
            if (validateAngleInDegrees(refractionAngleInDegrees()) == false)
                appendToMessage(errorMessage, tr("The angle of refraction must be greater than or equal to 0 degrees and less than 90 degrees.", "relevant"));
        }
        else
        {
            if (validateAngleInRadians(refractionAngleInRadians()) == false)
                appendToMessage(errorMessage, tr("The angle of refraction must be greater than or equal to 0 radians and less than pi/4 radians.", "relevant"));
        }
        answer = (refractiveIndexMedium2 * qSin(refractionAngleInRadians())) / refractiveIndexMedium1;
    }
    else
    {
        // validate angle of incidence
        if (ui->comboBox_incidenceAngle->currentIndex() == 0)
        {
            if (validateAngleInDegrees(incidenceAngleInDegrees()) == false)
                appendToMessage(errorMessage, tr("The angle of incidence must be greater than or equal to 0 degrees and less than 90 degrees.", "relevant"));
        }
        else
        {
            if (validateAngleInRadians(incidenceAngleInRadians()) == false)
                appendToMessage(errorMessage, tr("The angle of incidence must be greater than or equal to 0 radians and less than pi/4 radians.", "relevant"));
        }
        answer = (refractiveIndexMedium1 * qSin(incidenceAngleInRadians())) / refractiveIndexMedium2;
    }
    setLastError(errorMessage);
    if (!errorMessage.isEmpty())
        return -1;
    return answer;
}

double MainWindow::calculateAngle(MainWindow::angle a)
{
    return qAsin(calculateAngleSin(a));
}
