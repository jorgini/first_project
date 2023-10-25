/********************************************************************************
** Form generated from reading UI file 'angelwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANGELWINDOW_H
#define UI_ANGELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AngelWindow
{
public:

    void setupUi(QWidget *AngelWindow)
    {
        if (AngelWindow->objectName().isEmpty())
            AngelWindow->setObjectName("AngelWindow");
        AngelWindow->resize(825, 573);

        retranslateUi(AngelWindow);

        QMetaObject::connectSlotsByName(AngelWindow);
    } // setupUi

    void retranslateUi(QWidget *AngelWindow)
    {
        AngelWindow->setWindowTitle(QCoreApplication::translate("AngelWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AngelWindow: public Ui_AngelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANGELWINDOW_H
