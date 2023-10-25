#include "src/widgets/headers/distancewindow.h"
#include "form/ui_distancewindow.h"


QWidget *DistanceWindow::vector_view() {
    auto ret = new QWidget(this);
    auto lay = new QHBoxLayout;
    lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">(x:<bt>"));
    lay->addWidget(new QLineEdit);
    lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">y:<bt>"));
    lay->addWidget(new QLineEdit);
    lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">z:<bt>"));
    lay->addWidget(new QLineEdit);
    lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">)<bt>"));
    ret->setLayout(lay);
    auto size = lay->minimumSize();
    ret->setFixedSize(size);
    return ret;
}

QWidget *DistanceWindow::figure_view(const QString& form, const QString& subform) {
    auto ret = new QWidget(this);
    if (form == "by point and vector") {
        auto lays = QList<QLayout*>();
        for (int i = 0; i < 2; i++) {
            auto tmp = new QHBoxLayout;
            if (i == 0)
                tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">vector: (x:<bt>"));
            else
                tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">point: (x:<bt>"));
            tmp->addWidget(new QLineEdit);
            tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">y:<bt>"));
            tmp->addWidget(new QLineEdit);
            tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">z:<bt>"));
            tmp->addWidget(new QLineEdit);
            tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">)<bt>"));
            lays.push_back(tmp);
        }
        auto lay = new QVBoxLayout;
        lay->addLayout(lays.at(0));
        lay->addLayout(lays.at(1));
        ret->setLayout(lay);
        auto size = lay->minimumSize();
        ret->setFixedSize(size);
    }
    if (form == "by classic form") {
        auto lays = QList<QLayout*>();
        for (int i = 0; i < 2; i++) {
            auto eq = new QHBoxLayout;
            eq->addWidget(new QLineEdit);
            eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">x +<bt>"));
            eq->addWidget(new QLineEdit);
            eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">y +<bt>"));
            eq->addWidget(new QLineEdit);
            eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">z +<bt>"));
            eq->addWidget(new QLineEdit);
            eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">= 0<bt>"));
            lays.push_back(eq);
        }
        auto sys = new QVBoxLayout;
        sys->addLayout(lays.at(0));
        sys->addLayout(lays.at(1));
        auto lay = new QHBoxLayout;
        lay->addWidget(new QLabel("<b><span style=\" font-size:45pt; font-weight:700;\">{<bt>"));
        lay->addLayout(sys);
        ret->setLayout(lay);
        auto size = lay->minimumSize();
        ret->setFixedSize(size);
    }
    if (form == "by canonical form") {
        auto lays = QList<QLayout*>();
        for (int i = 0; i < 3; i++) {
            auto eq = new QHBoxLayout;
            if (i == 0)
                eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">x -<bt>"));
            if (i == 1)
                eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">y -<bt>"));
            if (i == 2)
                eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">z -<bt>"));
            eq->addWidget(new QLineEdit);
            auto frac = new QVBoxLayout;
            frac->addLayout(eq);
            auto line1 = new QFrame;
            line1->setFrameShape(QFrame::HLine);
            line1->setLineWidth(3);
            line1->setFrameShadow(QFrame::Plain);
            frac->addWidget(line1);
            frac->addWidget(new QLineEdit);
            lays.push_back(frac);
        }
        auto lay = new QHBoxLayout;
        lay->addLayout(lays.at(0));
        lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">=<bt>"));
        lay->addLayout(lays.at(1));
        lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">=<bt>"));
        lay->addLayout(lays.at(2));
        ret->setLayout(lay);
        auto size = lay->minimumSize();
        ret->setFixedSize(size);
    }
    if (form == "by parametric form") {
        auto lays = QList<QLayout*>();
        for (int i = 0; i < 3; i++) {
            auto eq = new QHBoxLayout;
            if (i == 0)
                eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">x = <bt>"));
            if (i == 1)
                eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">y = <bt>"));
            if (i == 2)
                eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">z = <bt>"));
            eq->addWidget(new QLineEdit);
            eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\"> + <bt>"));
            eq->addWidget(new QLineEdit);
            eq->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">t<bt>"));
            lays.push_back(eq);
        }
        auto lay = new QVBoxLayout;
        lay->addLayout(lays.at(0));
        lay->addLayout(lays.at(1));
        lay->addLayout(lays.at(2));
        ret->setLayout(lay);
        auto size = lay->minimumSize();
        ret->setFixedSize(size);
    }
    if (form == "by three points") {
        auto lays = QList<QLayout*>();
        for (int i = 0; i < 3; i++) {
            auto tmp = new QHBoxLayout;
            tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">(x:<bt>"));
            tmp->addWidget(new QLineEdit);
            tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">y:<bt>"));
            tmp->addWidget(new QLineEdit);
            tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">z:<bt>"));
            tmp->addWidget(new QLineEdit);
            tmp->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">)<bt>"));
            lays.push_back(tmp);
        }
        auto lay = new QVBoxLayout;
        lay->addLayout(lays.at(0));
        lay->addLayout(lays.at(1));
        lay->addLayout(lays.at(2));
        ret->setLayout(lay);
        auto size = lay->minimumSize();
        ret->setFixedSize(size);
    }
    if (form == "by line and point") {
        QWidget * line;
        line = figure_view(subform);
        auto lay = new QVBoxLayout;
        lay->addWidget(line);
        lay->addWidget(vector_view());
        ret->setLayout(lay);
        auto size = lay->minimumSize();
        ret->setFixedSize(size);
    }
    if (form == "by basic form") {
        auto lay = new QHBoxLayout;
        lay->addWidget(new QLineEdit);
        lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">x + <bt>"));
        lay->addWidget(new QLineEdit);
        lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">y + <bt>"));
        lay->addWidget(new QLineEdit);
        lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\">z + <bt>"));
        lay->addWidget(new QLineEdit);
        lay->addWidget(new QLabel("<b><span style=\" font-size:14pt; font-weight:700;\"> = 0<bt>"));
        ret->setLayout(lay);
        auto size = lay->minimumSize();
        ret->setFixedSize(size);
    }
    return ret;
}

QComboBox *DistanceWindow::change_combobox(int i, const QString &figure) {
    auto ret = new QComboBox(this);
    if (i == 1)
        connect(ret, SIGNAL(textHighlighted(QString)), this, SLOT(on_form_figure1_textHighlighted(QString)));
    if (i == 2)
        connect(ret, SIGNAL(textHighlighted(QString)), this, SLOT(on_form_figure2_textHighlighted(QString)));

    if (figure == "line") {
        ret->addItem("by point and vector");
        ret->addItem("by classic form");
        ret->addItem("by canonical form");
        ret->addItem("by parametric form");
    }
    if (figure == "plate") {
        ret->addItem("by three points");
        ret->addItem("by line and point");
        ret->addItem("by basic form");
    }
    ret->setFixedSize(500, 30);
    return ret;
}


DistanceWindow::DistanceWindow(QWidget *parent, QMainWindow *qMain) :
        QWidget(parent), ui(new Ui::DistanceWindow), start(qMain) {
    ui->setupUi(this);
}

DistanceWindow::~DistanceWindow() {
    delete ui;
    start->show();
}
