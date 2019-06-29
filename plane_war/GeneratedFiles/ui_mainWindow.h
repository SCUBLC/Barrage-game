/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindowClass
{
public:
    QWidget *centralWidget;
    QPushButton *btn_begin;
    QPushButton *btn_quit;
    QPushButton *btn_about;
    QPushButton *btn_set;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainWindowClass)
    {
        if (mainWindowClass->objectName().isEmpty())
            mainWindowClass->setObjectName(QStringLiteral("mainWindowClass"));
        mainWindowClass->resize(590, 835);
        mainWindowClass->setStyleSheet(QLatin1String("#centralWidget{\n"
"border-image: url(:/mainWindow/mainWindowBack);\n"
"}"));
        centralWidget = new QWidget(mainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_begin = new QPushButton(centralWidget);
        btn_begin->setObjectName(QStringLiteral("btn_begin"));
        btn_begin->setGeometry(QRect(230, 260, 93, 28));
        btn_quit = new QPushButton(centralWidget);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));
        btn_quit->setGeometry(QRect(230, 340, 93, 28));
        btn_about = new QPushButton(centralWidget);
        btn_about->setObjectName(QStringLiteral("btn_about"));
        btn_about->setGeometry(QRect(230, 480, 93, 28));
        btn_set = new QPushButton(centralWidget);
        btn_set->setObjectName(QStringLiteral("btn_set"));
        btn_set->setGeometry(QRect(230, 410, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 120, 251, 81));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"\351\232\266\344\271\246\";\n"
"color: rgb(255, 34, 5);"));
        mainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 590, 26));
        mainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainWindowClass->setStatusBar(statusBar);

        retranslateUi(mainWindowClass);

        QMetaObject::connectSlotsByName(mainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindowClass)
    {
        mainWindowClass->setWindowTitle(QApplication::translate("mainWindowClass", "mainWindow", nullptr));
        btn_begin->setText(QApplication::translate("mainWindowClass", "begin", nullptr));
        btn_quit->setText(QApplication::translate("mainWindowClass", "quit", nullptr));
        btn_about->setText(QApplication::translate("mainWindowClass", "about", nullptr));
        btn_set->setText(QApplication::translate("mainWindowClass", "set", nullptr));
        label->setText(QApplication::translate("mainWindowClass", "\351\233\267\351\234\206\346\210\230\346\234\272 1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindowClass: public Ui_mainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
