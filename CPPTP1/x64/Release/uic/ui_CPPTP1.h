/********************************************************************************
** Form generated from reading UI file 'CPPTP1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPPTP1_H
#define UI_CPPTP1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPPTP1Class
{
public:
    QAction *actionde;
    QAction *actiondehisto;
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuChoirsir;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CPPTP1Class)
    {
        if (CPPTP1Class->objectName().isEmpty())
            CPPTP1Class->setObjectName(QString::fromUtf8("CPPTP1Class"));
        CPPTP1Class->resize(600, 400);
        actionde = new QAction(CPPTP1Class);
        actionde->setObjectName(QString::fromUtf8("actionde"));
        actiondehisto = new QAction(CPPTP1Class);
        actiondehisto->setObjectName(QString::fromUtf8("actiondehisto"));
        centralWidget = new QWidget(CPPTP1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 160, 131, 51));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 220, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 250, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 280, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 250, 121, 41));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 150, 47, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 240, 91, 16));
        CPPTP1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CPPTP1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuChoirsir = new QMenu(menuBar);
        menuChoirsir->setObjectName(QString::fromUtf8("menuChoirsir"));
        CPPTP1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CPPTP1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CPPTP1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CPPTP1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CPPTP1Class->setStatusBar(statusBar);

        menuBar->addAction(menuChoirsir->menuAction());
        menuChoirsir->addAction(actionde);
        menuChoirsir->addAction(actiondehisto);

        retranslateUi(CPPTP1Class);
        QObject::connect(pushButton, SIGNAL(clicked()), CPPTP1Class, SLOT(tire()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), CPPTP1Class, SLOT(affichenombre()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CPPTP1Class, SLOT(remise()));
        QObject::connect(actiondehisto, SIGNAL(triggered()), CPPTP1Class, SLOT(denormal()));
        QObject::connect(actionde, SIGNAL(triggered()), CPPTP1Class, SLOT(dehisto()));

        QMetaObject::connectSlotsByName(CPPTP1Class);
    } // setupUi

    void retranslateUi(QMainWindow *CPPTP1Class)
    {
        CPPTP1Class->setWindowTitle(QCoreApplication::translate("CPPTP1Class", "CPPTP1", nullptr));
        actionde->setText(QCoreApplication::translate("CPPTP1Class", "de", nullptr));
        actiondehisto->setText(QCoreApplication::translate("CPPTP1Class", "dehisto", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("CPPTP1Class", "Lancer le d\303\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CPPTP1Class", "Remise a z\303\251ro", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CPPTP1Class", "Affiche nombre", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("CPPTP1Class", "Nombre", nullptr));
        label_4->setText(QCoreApplication::translate("CPPTP1Class", "Nombre final", nullptr));
        menuChoirsir->setTitle(QCoreApplication::translate("CPPTP1Class", "Choisir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CPPTP1Class: public Ui_CPPTP1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPPTP1_H
