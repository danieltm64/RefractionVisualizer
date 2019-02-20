/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "refractionview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEnglishUS;
    QAction *actionPortuguesBrasil;
    QAction *actionStyleStandard;
    QAction *actionStyleFusion;
    QAction *actionStyleFusionDarkWithGreen;
    QAction *actionStyleFusionDarkWithYellow;
    QAction *actionStyleFusionDarkWithBlue;
    QAction *actionStyleFusionDarkWithOrange;
    QAction *actionDisplayIncidentRay;
    QAction *actionDisplayReflectedRay;
    QAction *actionDisplayRefractedRay;
    QAction *actionDisplayIncidentRayPropagation;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_centralWidget;
    QHBoxLayout *horizontalLayout_topLeft;
    RefractionView *refractionView;
    QVBoxLayout *verticalLayout_topRight;
    QGroupBox *groupBox_medium1;
    QVBoxLayout *verticalLayout_medium1;
    QHBoxLayout *horizontalLayout_medium1speed;
    QRadioButton *radioButton_speed1;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *doubleSpinBox_speed1;
    QHBoxLayout *horizontalLayout_medium1refractiveIndex;
    QRadioButton *radioButton_refractiveIndex1;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBox_refractiveIndex1;
    QGroupBox *groupBox_medium2;
    QVBoxLayout *verticalLayout_medium2;
    QHBoxLayout *horizontalLayout_medium2speed;
    QRadioButton *radioButton_speed2;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *doubleSpinBox_speed2;
    QHBoxLayout *horizontalLayout_medium2refractiveIndex;
    QRadioButton *radioButton_refractiveIndex2;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *doubleSpinBox_refractiveIndex2;
    QGroupBox *groupBox_mediums12;
    QVBoxLayout *verticalLayout_mediums12;
    QHBoxLayout *horizontalLayout_incidenceAngle;
    QLabel *label_incidenceAngle;
    QSpacerItem *horizontalSpacer_incidenceAngle;
    QDoubleSpinBox *doubleSpinBox_incidenceAngle;
    QComboBox *comboBox_incidenceAngle;
    QHBoxLayout *horizontalLayout_refractionAngle;
    QLabel *label_refractionAngle;
    QSpacerItem *horizontalSpacer_refractionAngle;
    QDoubleSpinBox *doubleSpinBox_refractionAngle;
    QComboBox *comboBox_refractionAngle;
    QGroupBox *groupBox_whatToCalculate;
    QVBoxLayout *verticalLayout_whatToCalculate;
    QComboBox *comboBox_whatToCalculate;
    QHBoxLayout *horizontalLayout_whatToCalculate;
    QPushButton *pushButton_calculate;
    QPushButton *pushButton_copyResult;
    QLabel *label_output;
    QMenuBar *menuBar;
    QMenu *menuLanguage;
    QMenu *menuStyle;
    QMenu *menuDiagram;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(835, 462);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RefractionVisualizer32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionEnglishUS = new QAction(MainWindow);
        actionEnglishUS->setObjectName(QString::fromUtf8("actionEnglishUS"));
        actionEnglishUS->setCheckable(true);
        actionEnglishUS->setChecked(true);
        actionPortuguesBrasil = new QAction(MainWindow);
        actionPortuguesBrasil->setObjectName(QString::fromUtf8("actionPortuguesBrasil"));
        actionPortuguesBrasil->setCheckable(true);
        actionStyleStandard = new QAction(MainWindow);
        actionStyleStandard->setObjectName(QString::fromUtf8("actionStyleStandard"));
        actionStyleStandard->setCheckable(true);
        actionStyleStandard->setChecked(true);
        actionStyleFusion = new QAction(MainWindow);
        actionStyleFusion->setObjectName(QString::fromUtf8("actionStyleFusion"));
        actionStyleFusion->setCheckable(true);
        actionStyleFusionDarkWithGreen = new QAction(MainWindow);
        actionStyleFusionDarkWithGreen->setObjectName(QString::fromUtf8("actionStyleFusionDarkWithGreen"));
        actionStyleFusionDarkWithGreen->setCheckable(true);
        actionStyleFusionDarkWithYellow = new QAction(MainWindow);
        actionStyleFusionDarkWithYellow->setObjectName(QString::fromUtf8("actionStyleFusionDarkWithYellow"));
        actionStyleFusionDarkWithYellow->setCheckable(true);
        actionStyleFusionDarkWithBlue = new QAction(MainWindow);
        actionStyleFusionDarkWithBlue->setObjectName(QString::fromUtf8("actionStyleFusionDarkWithBlue"));
        actionStyleFusionDarkWithBlue->setCheckable(true);
        actionStyleFusionDarkWithOrange = new QAction(MainWindow);
        actionStyleFusionDarkWithOrange->setObjectName(QString::fromUtf8("actionStyleFusionDarkWithOrange"));
        actionStyleFusionDarkWithOrange->setCheckable(true);
        actionDisplayIncidentRay = new QAction(MainWindow);
        actionDisplayIncidentRay->setObjectName(QString::fromUtf8("actionDisplayIncidentRay"));
        actionDisplayIncidentRay->setCheckable(true);
        actionDisplayIncidentRay->setChecked(true);
        actionDisplayReflectedRay = new QAction(MainWindow);
        actionDisplayReflectedRay->setObjectName(QString::fromUtf8("actionDisplayReflectedRay"));
        actionDisplayReflectedRay->setCheckable(true);
        actionDisplayReflectedRay->setChecked(true);
        actionDisplayRefractedRay = new QAction(MainWindow);
        actionDisplayRefractedRay->setObjectName(QString::fromUtf8("actionDisplayRefractedRay"));
        actionDisplayRefractedRay->setCheckable(true);
        actionDisplayRefractedRay->setChecked(true);
        actionDisplayIncidentRayPropagation = new QAction(MainWindow);
        actionDisplayIncidentRayPropagation->setObjectName(QString::fromUtf8("actionDisplayIncidentRayPropagation"));
        actionDisplayIncidentRayPropagation->setCheckable(true);
        actionDisplayIncidentRayPropagation->setChecked(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_centralWidget = new QVBoxLayout(centralWidget);
        verticalLayout_centralWidget->setSpacing(6);
        verticalLayout_centralWidget->setContentsMargins(11, 11, 11, 11);
        verticalLayout_centralWidget->setObjectName(QString::fromUtf8("verticalLayout_centralWidget"));
        horizontalLayout_topLeft = new QHBoxLayout();
        horizontalLayout_topLeft->setSpacing(6);
        horizontalLayout_topLeft->setObjectName(QString::fromUtf8("horizontalLayout_topLeft"));
        refractionView = new RefractionView(centralWidget);
        refractionView->setObjectName(QString::fromUtf8("refractionView"));
        refractionView->setMinimumSize(QSize(480, 360));

        horizontalLayout_topLeft->addWidget(refractionView);

        verticalLayout_topRight = new QVBoxLayout();
        verticalLayout_topRight->setSpacing(6);
        verticalLayout_topRight->setObjectName(QString::fromUtf8("verticalLayout_topRight"));
        groupBox_medium1 = new QGroupBox(centralWidget);
        groupBox_medium1->setObjectName(QString::fromUtf8("groupBox_medium1"));
        verticalLayout_medium1 = new QVBoxLayout(groupBox_medium1);
        verticalLayout_medium1->setSpacing(6);
        verticalLayout_medium1->setContentsMargins(11, 11, 11, 11);
        verticalLayout_medium1->setObjectName(QString::fromUtf8("verticalLayout_medium1"));
        horizontalLayout_medium1speed = new QHBoxLayout();
        horizontalLayout_medium1speed->setSpacing(6);
        horizontalLayout_medium1speed->setObjectName(QString::fromUtf8("horizontalLayout_medium1speed"));
        radioButton_speed1 = new QRadioButton(groupBox_medium1);
        radioButton_speed1->setObjectName(QString::fromUtf8("radioButton_speed1"));
        radioButton_speed1->setChecked(false);

        horizontalLayout_medium1speed->addWidget(radioButton_speed1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_medium1speed->addItem(horizontalSpacer_2);

        doubleSpinBox_speed1 = new QDoubleSpinBox(groupBox_medium1);
        doubleSpinBox_speed1->setObjectName(QString::fromUtf8("doubleSpinBox_speed1"));
        doubleSpinBox_speed1->setDecimals(3);
        doubleSpinBox_speed1->setMaximum(299792458.000000000000000);

        horizontalLayout_medium1speed->addWidget(doubleSpinBox_speed1);


        verticalLayout_medium1->addLayout(horizontalLayout_medium1speed);

        horizontalLayout_medium1refractiveIndex = new QHBoxLayout();
        horizontalLayout_medium1refractiveIndex->setSpacing(6);
        horizontalLayout_medium1refractiveIndex->setObjectName(QString::fromUtf8("horizontalLayout_medium1refractiveIndex"));
        radioButton_refractiveIndex1 = new QRadioButton(groupBox_medium1);
        radioButton_refractiveIndex1->setObjectName(QString::fromUtf8("radioButton_refractiveIndex1"));
        radioButton_refractiveIndex1->setChecked(false);

        horizontalLayout_medium1refractiveIndex->addWidget(radioButton_refractiveIndex1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_medium1refractiveIndex->addItem(horizontalSpacer);

        doubleSpinBox_refractiveIndex1 = new QDoubleSpinBox(groupBox_medium1);
        doubleSpinBox_refractiveIndex1->setObjectName(QString::fromUtf8("doubleSpinBox_refractiveIndex1"));
        doubleSpinBox_refractiveIndex1->setDecimals(3);
        doubleSpinBox_refractiveIndex1->setMaximum(299792458.000000000000000);

        horizontalLayout_medium1refractiveIndex->addWidget(doubleSpinBox_refractiveIndex1);


        verticalLayout_medium1->addLayout(horizontalLayout_medium1refractiveIndex);


        verticalLayout_topRight->addWidget(groupBox_medium1);

        groupBox_medium2 = new QGroupBox(centralWidget);
        groupBox_medium2->setObjectName(QString::fromUtf8("groupBox_medium2"));
        verticalLayout_medium2 = new QVBoxLayout(groupBox_medium2);
        verticalLayout_medium2->setSpacing(6);
        verticalLayout_medium2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_medium2->setObjectName(QString::fromUtf8("verticalLayout_medium2"));
        horizontalLayout_medium2speed = new QHBoxLayout();
        horizontalLayout_medium2speed->setSpacing(6);
        horizontalLayout_medium2speed->setObjectName(QString::fromUtf8("horizontalLayout_medium2speed"));
        radioButton_speed2 = new QRadioButton(groupBox_medium2);
        radioButton_speed2->setObjectName(QString::fromUtf8("radioButton_speed2"));
        radioButton_speed2->setChecked(false);

        horizontalLayout_medium2speed->addWidget(radioButton_speed2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_medium2speed->addItem(horizontalSpacer_3);

        doubleSpinBox_speed2 = new QDoubleSpinBox(groupBox_medium2);
        doubleSpinBox_speed2->setObjectName(QString::fromUtf8("doubleSpinBox_speed2"));
        doubleSpinBox_speed2->setDecimals(3);
        doubleSpinBox_speed2->setMaximum(299792458.000000000000000);

        horizontalLayout_medium2speed->addWidget(doubleSpinBox_speed2);


        verticalLayout_medium2->addLayout(horizontalLayout_medium2speed);

        horizontalLayout_medium2refractiveIndex = new QHBoxLayout();
        horizontalLayout_medium2refractiveIndex->setSpacing(6);
        horizontalLayout_medium2refractiveIndex->setObjectName(QString::fromUtf8("horizontalLayout_medium2refractiveIndex"));
        radioButton_refractiveIndex2 = new QRadioButton(groupBox_medium2);
        radioButton_refractiveIndex2->setObjectName(QString::fromUtf8("radioButton_refractiveIndex2"));
        radioButton_refractiveIndex2->setChecked(false);

        horizontalLayout_medium2refractiveIndex->addWidget(radioButton_refractiveIndex2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_medium2refractiveIndex->addItem(horizontalSpacer_4);

        doubleSpinBox_refractiveIndex2 = new QDoubleSpinBox(groupBox_medium2);
        doubleSpinBox_refractiveIndex2->setObjectName(QString::fromUtf8("doubleSpinBox_refractiveIndex2"));
        doubleSpinBox_refractiveIndex2->setDecimals(3);
        doubleSpinBox_refractiveIndex2->setMaximum(299792458.000000000000000);

        horizontalLayout_medium2refractiveIndex->addWidget(doubleSpinBox_refractiveIndex2);


        verticalLayout_medium2->addLayout(horizontalLayout_medium2refractiveIndex);


        verticalLayout_topRight->addWidget(groupBox_medium2);

        groupBox_mediums12 = new QGroupBox(centralWidget);
        groupBox_mediums12->setObjectName(QString::fromUtf8("groupBox_mediums12"));
        verticalLayout_mediums12 = new QVBoxLayout(groupBox_mediums12);
        verticalLayout_mediums12->setSpacing(6);
        verticalLayout_mediums12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_mediums12->setObjectName(QString::fromUtf8("verticalLayout_mediums12"));
        horizontalLayout_incidenceAngle = new QHBoxLayout();
        horizontalLayout_incidenceAngle->setSpacing(6);
        horizontalLayout_incidenceAngle->setObjectName(QString::fromUtf8("horizontalLayout_incidenceAngle"));
        label_incidenceAngle = new QLabel(groupBox_mediums12);
        label_incidenceAngle->setObjectName(QString::fromUtf8("label_incidenceAngle"));

        horizontalLayout_incidenceAngle->addWidget(label_incidenceAngle);

        horizontalSpacer_incidenceAngle = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_incidenceAngle->addItem(horizontalSpacer_incidenceAngle);

        doubleSpinBox_incidenceAngle = new QDoubleSpinBox(groupBox_mediums12);
        doubleSpinBox_incidenceAngle->setObjectName(QString::fromUtf8("doubleSpinBox_incidenceAngle"));
        doubleSpinBox_incidenceAngle->setDecimals(3);
        doubleSpinBox_incidenceAngle->setMaximum(90.000000000000000);

        horizontalLayout_incidenceAngle->addWidget(doubleSpinBox_incidenceAngle);

        comboBox_incidenceAngle = new QComboBox(groupBox_mediums12);
        comboBox_incidenceAngle->addItem(QString());
        comboBox_incidenceAngle->addItem(QString());
        comboBox_incidenceAngle->setObjectName(QString::fromUtf8("comboBox_incidenceAngle"));

        horizontalLayout_incidenceAngle->addWidget(comboBox_incidenceAngle);


        verticalLayout_mediums12->addLayout(horizontalLayout_incidenceAngle);

        horizontalLayout_refractionAngle = new QHBoxLayout();
        horizontalLayout_refractionAngle->setSpacing(6);
        horizontalLayout_refractionAngle->setObjectName(QString::fromUtf8("horizontalLayout_refractionAngle"));
        label_refractionAngle = new QLabel(groupBox_mediums12);
        label_refractionAngle->setObjectName(QString::fromUtf8("label_refractionAngle"));

        horizontalLayout_refractionAngle->addWidget(label_refractionAngle);

        horizontalSpacer_refractionAngle = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_refractionAngle->addItem(horizontalSpacer_refractionAngle);

        doubleSpinBox_refractionAngle = new QDoubleSpinBox(groupBox_mediums12);
        doubleSpinBox_refractionAngle->setObjectName(QString::fromUtf8("doubleSpinBox_refractionAngle"));
        doubleSpinBox_refractionAngle->setDecimals(3);
        doubleSpinBox_refractionAngle->setMaximum(90.000000000000000);

        horizontalLayout_refractionAngle->addWidget(doubleSpinBox_refractionAngle);

        comboBox_refractionAngle = new QComboBox(groupBox_mediums12);
        comboBox_refractionAngle->addItem(QString());
        comboBox_refractionAngle->addItem(QString());
        comboBox_refractionAngle->setObjectName(QString::fromUtf8("comboBox_refractionAngle"));

        horizontalLayout_refractionAngle->addWidget(comboBox_refractionAngle);


        verticalLayout_mediums12->addLayout(horizontalLayout_refractionAngle);


        verticalLayout_topRight->addWidget(groupBox_mediums12);

        groupBox_whatToCalculate = new QGroupBox(centralWidget);
        groupBox_whatToCalculate->setObjectName(QString::fromUtf8("groupBox_whatToCalculate"));
        verticalLayout_whatToCalculate = new QVBoxLayout(groupBox_whatToCalculate);
        verticalLayout_whatToCalculate->setSpacing(6);
        verticalLayout_whatToCalculate->setContentsMargins(11, 11, 11, 11);
        verticalLayout_whatToCalculate->setObjectName(QString::fromUtf8("verticalLayout_whatToCalculate"));
        comboBox_whatToCalculate = new QComboBox(groupBox_whatToCalculate);
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->addItem(QString());
        comboBox_whatToCalculate->setObjectName(QString::fromUtf8("comboBox_whatToCalculate"));

        verticalLayout_whatToCalculate->addWidget(comboBox_whatToCalculate);

        horizontalLayout_whatToCalculate = new QHBoxLayout();
        horizontalLayout_whatToCalculate->setSpacing(6);
        horizontalLayout_whatToCalculate->setObjectName(QString::fromUtf8("horizontalLayout_whatToCalculate"));
        pushButton_calculate = new QPushButton(groupBox_whatToCalculate);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));

        horizontalLayout_whatToCalculate->addWidget(pushButton_calculate);

        pushButton_copyResult = new QPushButton(groupBox_whatToCalculate);
        pushButton_copyResult->setObjectName(QString::fromUtf8("pushButton_copyResult"));

        horizontalLayout_whatToCalculate->addWidget(pushButton_copyResult);


        verticalLayout_whatToCalculate->addLayout(horizontalLayout_whatToCalculate);


        verticalLayout_topRight->addWidget(groupBox_whatToCalculate);


        horizontalLayout_topLeft->addLayout(verticalLayout_topRight);


        verticalLayout_centralWidget->addLayout(horizontalLayout_topLeft);

        label_output = new QLabel(centralWidget);
        label_output->setObjectName(QString::fromUtf8("label_output"));
        label_output->setWordWrap(true);

        verticalLayout_centralWidget->addWidget(label_output);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 835, 20));
        menuLanguage = new QMenu(menuBar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuStyle = new QMenu(menuBar);
        menuStyle->setObjectName(QString::fromUtf8("menuStyle"));
        menuDiagram = new QMenu(menuBar);
        menuDiagram->setObjectName(QString::fromUtf8("menuDiagram"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuLanguage->menuAction());
        menuBar->addAction(menuStyle->menuAction());
        menuBar->addAction(menuDiagram->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuLanguage->addAction(actionEnglishUS);
        menuLanguage->addAction(actionPortuguesBrasil);
        menuStyle->addAction(actionStyleStandard);
        menuStyle->addAction(actionStyleFusion);
        menuStyle->addAction(actionStyleFusionDarkWithGreen);
        menuStyle->addAction(actionStyleFusionDarkWithYellow);
        menuStyle->addAction(actionStyleFusionDarkWithBlue);
        menuStyle->addAction(actionStyleFusionDarkWithOrange);
        menuDiagram->addAction(actionDisplayIncidentRay);
        menuDiagram->addAction(actionDisplayReflectedRay);
        menuDiagram->addAction(actionDisplayRefractedRay);
        menuDiagram->addAction(actionDisplayIncidentRayPropagation);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Refraction Visualizer", nullptr));
        actionEnglishUS->setText(QApplication::translate("MainWindow", "English (US)", nullptr));
        actionPortuguesBrasil->setText(QApplication::translate("MainWindow", "Portugu\303\252s (Brasil)", nullptr));
        actionStyleStandard->setText(QApplication::translate("MainWindow", "Standard", nullptr));
        actionStyleFusion->setText(QApplication::translate("MainWindow", "Fusion", nullptr));
        actionStyleFusionDarkWithGreen->setText(QApplication::translate("MainWindow", "Fusion (dark with green)", nullptr));
        actionStyleFusionDarkWithYellow->setText(QApplication::translate("MainWindow", "Fusion (dark with yellow)", nullptr));
        actionStyleFusionDarkWithBlue->setText(QApplication::translate("MainWindow", "Fusion (dark with blue)", nullptr));
        actionStyleFusionDarkWithOrange->setText(QApplication::translate("MainWindow", "Fusion (dark with orange)", nullptr));
        actionDisplayIncidentRay->setText(QApplication::translate("MainWindow", "Display incident ray", nullptr));
        actionDisplayReflectedRay->setText(QApplication::translate("MainWindow", "Display reflected ray", nullptr));
        actionDisplayRefractedRay->setText(QApplication::translate("MainWindow", "Display refracted ray", nullptr));
        actionDisplayIncidentRayPropagation->setText(QApplication::translate("MainWindow", "Display incident ray propagation", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        groupBox_medium1->setTitle(QApplication::translate("MainWindow", "Medium 1 (top)", nullptr));
        radioButton_speed1->setText(QApplication::translate("MainWindow", "Speed of light in medium 1 (m/s):", nullptr));
        radioButton_refractiveIndex1->setText(QApplication::translate("MainWindow", "Refractive index of medium 1:", nullptr));
        groupBox_medium2->setTitle(QApplication::translate("MainWindow", "Medium 2 (bottom)", nullptr));
        radioButton_speed2->setText(QApplication::translate("MainWindow", "Speed of light in medium 2 (m/s):", nullptr));
        radioButton_refractiveIndex2->setText(QApplication::translate("MainWindow", "Refractive index of medium 2:", nullptr));
        groupBox_mediums12->setTitle(QApplication::translate("MainWindow", "Mediums 1 and 2", nullptr));
        label_incidenceAngle->setText(QApplication::translate("MainWindow", "Angle of Incidence:", nullptr));
        comboBox_incidenceAngle->setItemText(0, QApplication::translate("MainWindow", "Degrees", nullptr));
        comboBox_incidenceAngle->setItemText(1, QApplication::translate("MainWindow", "Radians", nullptr));

        label_refractionAngle->setText(QApplication::translate("MainWindow", "Angle of Refraction:", nullptr));
        comboBox_refractionAngle->setItemText(0, QApplication::translate("MainWindow", "Degrees", nullptr));
        comboBox_refractionAngle->setItemText(1, QApplication::translate("MainWindow", "Radians", nullptr));

        groupBox_whatToCalculate->setTitle(QApplication::translate("MainWindow", "What To Calculate", nullptr));
        comboBox_whatToCalculate->setItemText(0, QApplication::translate("MainWindow", "Refractive index of medium 1", nullptr));
        comboBox_whatToCalculate->setItemText(1, QApplication::translate("MainWindow", "Refractive index of medium 2", nullptr));
        comboBox_whatToCalculate->setItemText(2, QApplication::translate("MainWindow", "Speed of light in medium 1", nullptr));
        comboBox_whatToCalculate->setItemText(3, QApplication::translate("MainWindow", "Speed of light in medium 2", nullptr));
        comboBox_whatToCalculate->setItemText(4, QApplication::translate("MainWindow", "Sine of angle of incidence", nullptr));
        comboBox_whatToCalculate->setItemText(5, QApplication::translate("MainWindow", "Sine of angle of refraction", nullptr));
        comboBox_whatToCalculate->setItemText(6, QApplication::translate("MainWindow", "Angle of incidence", nullptr));
        comboBox_whatToCalculate->setItemText(7, QApplication::translate("MainWindow", "Angle of refraction", nullptr));

        pushButton_calculate->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        pushButton_copyResult->setText(QApplication::translate("MainWindow", "Copy Result", nullptr));
        label_output->setText(QApplication::translate("MainWindow", "Ready", nullptr));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", nullptr));
        menuStyle->setTitle(QApplication::translate("MainWindow", "Style", nullptr));
        menuDiagram->setTitle(QApplication::translate("MainWindow", "Diagram", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
