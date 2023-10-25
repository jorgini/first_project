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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AngelWindow
{
public:
    QLabel *label;
    QComboBox *choose_figure1;
    QComboBox *choose_figure2;
    QWidget *input_figure2;
    QComboBox *form_figure1;
    QComboBox *form_figure2;
    QWidget *input_figure1;
    QPushButton *answer;
    QComboBox *form_subfigure2;
    QLabel *output;
    QComboBox *form_subfigure1;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *AngelWindow)
    {
        if (AngelWindow->objectName().isEmpty())
            AngelWindow->setObjectName("AngelWindow");
        AngelWindow->setEnabled(true);
        AngelWindow->resize(1080, 720);
        label = new QLabel(AngelWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(335, 0, 410, 100));
        choose_figure1 = new QComboBox(AngelWindow);
        choose_figure1->addItem(QString());
        choose_figure1->addItem(QString());
        choose_figure1->addItem(QString());
        choose_figure1->setObjectName("choose_figure1");
        choose_figure1->setGeometry(QRect(335, 100, 410, 30));
        choose_figure2 = new QComboBox(AngelWindow);
        choose_figure2->addItem(QString());
        choose_figure2->addItem(QString());
        choose_figure2->addItem(QString());
        choose_figure2->setObjectName("choose_figure2");
        choose_figure2->setGeometry(QRect(335, 135, 410, 30));
        input_figure2 = new QWidget(AngelWindow);
        input_figure2->setObjectName("input_figure2");
        input_figure2->setGeometry(QRect(215, 500, 650, 150));
        form_figure1 = new QComboBox(AngelWindow);
        form_figure1->addItem(QString());
        form_figure1->addItem(QString());
        form_figure1->addItem(QString());
        form_figure1->addItem(QString());
        form_figure1->setObjectName("form_figure1");
        form_figure1->setEnabled(true);
        form_figure1->setGeometry(QRect(290, 180, 500, 30));
        form_figure1->setFrame(true);
        form_figure2 = new QComboBox(AngelWindow);
        form_figure2->addItem(QString());
        form_figure2->addItem(QString());
        form_figure2->addItem(QString());
        form_figure2->setObjectName("form_figure2");
        form_figure2->setGeometry(QRect(290, 420, 500, 30));
        input_figure1 = new QWidget(AngelWindow);
        input_figure1->setObjectName("input_figure1");
        input_figure1->setEnabled(true);
        input_figure1->setGeometry(QRect(215, 260, 650, 150));
        answer = new QPushButton(AngelWindow);
        answer->setObjectName("answer");
        answer->setGeometry(QRect(490, 650, 83, 29));
        form_subfigure2 = new QComboBox(AngelWindow);
        form_subfigure2->addItem(QString());
        form_subfigure2->addItem(QString());
        form_subfigure2->addItem(QString());
        form_subfigure2->addItem(QString());
        form_subfigure2->setObjectName("form_subfigure2");
        form_subfigure2->setGeometry(QRect(290, 455, 500, 30));
        output = new QLabel(AngelWindow);
        output->setObjectName("output");
        output->setGeometry(QRect(290, 680, 500, 30));
        form_subfigure1 = new QComboBox(AngelWindow);
        form_subfigure1->addItem(QString());
        form_subfigure1->addItem(QString());
        form_subfigure1->addItem(QString());
        form_subfigure1->addItem(QString());
        form_subfigure1->setObjectName("form_subfigure1");
        form_subfigure1->setGeometry(QRect(290, 215, 500, 30));
        label_2 = new QLabel(AngelWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 415, 140, 40));
        label_3 = new QLabel(AngelWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 175, 121, 40));
        label->raise();
        choose_figure1->raise();
        choose_figure2->raise();
        form_figure1->raise();
        input_figure1->raise();
        form_figure2->raise();
        input_figure2->raise();
        answer->raise();
        form_subfigure2->raise();
        output->raise();
        form_subfigure1->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(AngelWindow);

        QMetaObject::connectSlotsByName(AngelWindow);
    } // setupUi

    void retranslateUi(QWidget *AngelWindow)
    {
        AngelWindow->setWindowTitle(QCoreApplication::translate("AngelWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("AngelWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Welcome to find angel calculator!</span></p><p align=\"center\"><span style=\" font-size:10pt;\">Let's select a type of figures.</span></p></body></html>", nullptr));
        choose_figure1->setItemText(0, QCoreApplication::translate("AngelWindow", "vector", nullptr));
        choose_figure1->setItemText(1, QCoreApplication::translate("AngelWindow", "line", nullptr));
        choose_figure1->setItemText(2, QCoreApplication::translate("AngelWindow", "plate", nullptr));

        choose_figure2->setItemText(0, QCoreApplication::translate("AngelWindow", "vector", nullptr));
        choose_figure2->setItemText(1, QCoreApplication::translate("AngelWindow", "line", nullptr));
        choose_figure2->setItemText(2, QCoreApplication::translate("AngelWindow", "plate", nullptr));

        form_figure1->setItemText(0, QCoreApplication::translate("AngelWindow", "by point and vector", nullptr));
        form_figure1->setItemText(1, QCoreApplication::translate("AngelWindow", "by classic form", nullptr));
        form_figure1->setItemText(2, QCoreApplication::translate("AngelWindow", "by canonical form", nullptr));
        form_figure1->setItemText(3, QCoreApplication::translate("AngelWindow", "by parametric form", nullptr));

        form_figure2->setItemText(0, QCoreApplication::translate("AngelWindow", "by three points", nullptr));
        form_figure2->setItemText(1, QCoreApplication::translate("AngelWindow", "by line and point", nullptr));
        form_figure2->setItemText(2, QCoreApplication::translate("AngelWindow", "by classic form", nullptr));

        answer->setText(QCoreApplication::translate("AngelWindow", "Answer", nullptr));
        form_subfigure2->setItemText(0, QCoreApplication::translate("AngelWindow", "by point and vector", nullptr));
        form_subfigure2->setItemText(1, QCoreApplication::translate("AngelWindow", "by classic form", nullptr));
        form_subfigure2->setItemText(2, QCoreApplication::translate("AngelWindow", "by canonical form", nullptr));
        form_subfigure2->setItemText(3, QCoreApplication::translate("AngelWindow", "by parametric form", nullptr));

        output->setText(QString());
        form_subfigure1->setItemText(0, QCoreApplication::translate("AngelWindow", "by point and vector", nullptr));
        form_subfigure1->setItemText(1, QCoreApplication::translate("AngelWindow", "by classic form", nullptr));
        form_subfigure1->setItemText(2, QCoreApplication::translate("AngelWindow", "by canonical form", nullptr));
        form_subfigure1->setItemText(3, QCoreApplication::translate("AngelWindow", "by parametric form", nullptr));

        label_2->setText(QCoreApplication::translate("AngelWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">second figure:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("AngelWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">first figure:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AngelWindow: public Ui_AngelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANGELWINDOW_H
