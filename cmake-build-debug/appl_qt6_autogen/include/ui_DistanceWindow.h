/********************************************************************************
** Form generated from reading UI file 'distancewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTANCEWINDOW_H
#define UI_DISTANCEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DistanceWindow
{
public:

    void setupUi(QWidget *DistanceWindow)
    {
        if (DistanceWindow->objectName().isEmpty())
            DistanceWindow->setObjectName("DistanceWindow");
        DistanceWindow->resize(400, 300);

        retranslateUi(DistanceWindow);

        QMetaObject::connectSlotsByName(DistanceWindow);
    } // setupUi

    void retranslateUi(QWidget *DistanceWindow)
    {
        DistanceWindow->setWindowTitle(QCoreApplication::translate("DistanceWindow", "DistanceWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DistanceWindow: public Ui_DistanceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTANCEWINDOW_H
