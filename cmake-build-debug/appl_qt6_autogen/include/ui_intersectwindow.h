/********************************************************************************
** Form generated from reading UI file 'intersectwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERSECTWINDOW_H
#define UI_INTERSECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntersectWindow
{
public:

    void setupUi(QWidget *IntersectWindow)
    {
        if (IntersectWindow->objectName().isEmpty())
            IntersectWindow->setObjectName("IntersectWindow");
        IntersectWindow->resize(400, 300);

        retranslateUi(IntersectWindow);

        QMetaObject::connectSlotsByName(IntersectWindow);
    } // setupUi

    void retranslateUi(QWidget *IntersectWindow)
    {
        IntersectWindow->setWindowTitle(QCoreApplication::translate("IntersectWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntersectWindow: public Ui_IntersectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERSECTWINDOW_H
