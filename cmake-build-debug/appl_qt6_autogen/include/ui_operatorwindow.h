/********************************************************************************
** Form generated from reading UI file 'operatorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATORWINDOW_H
#define UI_OPERATORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperatorWindow
{
public:

    void setupUi(QWidget *OperatorWindow)
    {
        if (OperatorWindow->objectName().isEmpty())
            OperatorWindow->setObjectName("OperatorWindow");
        OperatorWindow->resize(400, 300);

        retranslateUi(OperatorWindow);

        QMetaObject::connectSlotsByName(OperatorWindow);
    } // setupUi

    void retranslateUi(QWidget *OperatorWindow)
    {
        OperatorWindow->setWindowTitle(QCoreApplication::translate("OperatorWindow", "OperatorWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OperatorWindow: public Ui_OperatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATORWINDOW_H
