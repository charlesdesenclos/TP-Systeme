/********************************************************************************
** Form generated from reading UI file 'TPSondeurMarin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPSONDEURMARIN_H
#define UI_TPSONDEURMARIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPSondeurMarinClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *LabelAfficheProfondeur;
    QLabel *LabelAfficheTemperature;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPSondeurMarinClass)
    {
        if (TPSondeurMarinClass->objectName().isEmpty())
            TPSondeurMarinClass->setObjectName(QString::fromUtf8("TPSondeurMarinClass"));
        TPSondeurMarinClass->resize(600, 400);
        centralWidget = new QWidget(TPSondeurMarinClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 81, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 101, 41));
        LabelAfficheProfondeur = new QLabel(centralWidget);
        LabelAfficheProfondeur->setObjectName(QString::fromUtf8("LabelAfficheProfondeur"));
        LabelAfficheProfondeur->setGeometry(QRect(110, 90, 91, 20));
        LabelAfficheTemperature = new QLabel(centralWidget);
        LabelAfficheTemperature->setObjectName(QString::fromUtf8("LabelAfficheTemperature"));
        LabelAfficheTemperature->setGeometry(QRect(140, 150, 111, 41));
        TPSondeurMarinClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TPSondeurMarinClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TPSondeurMarinClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPSondeurMarinClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPSondeurMarinClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TPSondeurMarinClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPSondeurMarinClass->setStatusBar(statusBar);

        retranslateUi(TPSondeurMarinClass);

        QMetaObject::connectSlotsByName(TPSondeurMarinClass);
    } // setupUi

    void retranslateUi(QMainWindow *TPSondeurMarinClass)
    {
        TPSondeurMarinClass->setWindowTitle(QCoreApplication::translate("TPSondeurMarinClass", "TPSondeurMarin", nullptr));
        label->setText(QCoreApplication::translate("TPSondeurMarinClass", "Profondeur :", nullptr));
        label_2->setText(QCoreApplication::translate("TPSondeurMarinClass", "Temp\303\251rature eau :", nullptr));
        LabelAfficheProfondeur->setText(QString());
        LabelAfficheTemperature->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TPSondeurMarinClass: public Ui_TPSondeurMarinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPSONDEURMARIN_H
