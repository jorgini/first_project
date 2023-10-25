/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exit;
    QAction *actionSelect_language;
    QAction *actionAbout;
    QAction *actionMath_base;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *button_graph;
    QPushButton *button_intersect;
    QPushButton *button_angel;
    QPushButton *button_distance;
    QPushButton *button_operator;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuSettings;
    QMenu *menuInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        exit = new QAction(MainWindow);
        exit->setObjectName("exit");
        actionSelect_language = new QAction(MainWindow);
        actionSelect_language->setObjectName("actionSelect_language");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionMath_base = new QAction(MainWindow);
        actionMath_base->setObjectName("actionMath_base");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 771, 531));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        button_graph = new QPushButton(widget);
        button_graph->setObjectName("button_graph");

        verticalLayout->addWidget(button_graph);

        button_intersect = new QPushButton(widget);
        button_intersect->setObjectName("button_intersect");

        verticalLayout->addWidget(button_intersect);

        button_angel = new QPushButton(widget);
        button_angel->setObjectName("button_angel");

        verticalLayout->addWidget(button_angel);

        button_distance = new QPushButton(widget);
        button_distance->setObjectName("button_distance");

        verticalLayout->addWidget(button_distance);

        button_operator = new QPushButton(widget);
        button_operator->setObjectName("button_operator");

        verticalLayout->addWidget(button_operator);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName("menuSettings");
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName("menuInfo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menuMenu->addAction(exit);
        menuSettings->addAction(actionSelect_language);
        menuInfo->addAction(actionAbout);
        menuInfo->addAction(actionMath_base);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_language->setText(QCoreApplication::translate("MainWindow", "Select language", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About us", nullptr));
        actionMath_base->setText(QCoreApplication::translate("MainWindow", "Math base", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Welcome to 3d linear calculator!</span></p></body></html>", nullptr));
        button_graph->setText(QCoreApplication::translate("MainWindow", "3d graph calculator", nullptr));
        button_intersect->setText(QCoreApplication::translate("MainWindow", "find intersect", nullptr));
        button_angel->setText(QCoreApplication::translate("MainWindow", "find angel", nullptr));
        button_distance->setText(QCoreApplication::translate("MainWindow", "find distance", nullptr));
        button_operator->setText(QCoreApplication::translate("MainWindow", "linear operator", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
