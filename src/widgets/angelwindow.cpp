#include "src/widgets/headers/angelwindow.h"
#include "form/ui_angelwindow.h"

QWidget *AngelWindow::vector_view() {
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

QWidget *AngelWindow::figure_view(const QString& form, const QString& subform) {
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

QComboBox *AngelWindow::change_combobox(int i, const QString &figure) {
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

AngelWindow::AngelWindow(QWidget *parent, QMainWindow *qMain) :
        QWidget(parent), ui(new Ui::AngelWindow), start(qMain) {
    ui->setupUi(this);
    ui->input_figure1->setAttribute(Qt::WA_DeleteOnClose, true);
    ui->input_figure2->setAttribute(Qt::WA_DeleteOnClose, true);
    ui->form_figure1->hide();
    ui->form_figure2->hide();
    ui->form_subfigure1->hide();
    ui->form_subfigure2->hide();
    connect(ui->form_subfigure1, SIGNAL(textHighlighted(QString)),
            this, SLOT(on_form_subfigure1_textHighlighted(QString)));
    connect(ui->form_subfigure1, SIGNAL(textHighlighted(QString)),
            this, SLOT(on_form_subfigure1_textHighlighted(QString)));
    connect(ui->answer, SIGNAL(clicked(bool)),
            this, SLOT(on_answer_clicked()));
    ui->input_figure1 = vector_view();
    ui->input_figure2 = vector_view();
    ui->input_figure1->move(280, 260);
    ui->input_figure2->move(280, 470);
}

AngelWindow::~AngelWindow() {
    delete ui;
    start->show();
}

void AngelWindow::on_choose_figure1_textHighlighted(const QString &arg1) {
    if (arg1 == "vector") {
        ui->form_subfigure1->hide();
        ui->form_subfigure2->hide();
        ui->form_figure1->hide();
        ui->input_figure1->hide();
        delete ui->input_figure1;
        ui->input_figure1 = vector_view();
        ui->input_figure1->move(280, 260);
        ui->input_figure1->show();
    }
    else {
        ui->form_subfigure1->hide();
        ui->form_subfigure2->hide();
        delete ui->form_figure1;
        ui->form_figure1 = change_combobox(1, arg1);
        ui->form_figure1->show();
        ui->form_figure1->move(290, 180);
        ui->form_figure1->textHighlighted(ui->form_figure1->currentText());
    }
}

void AngelWindow::on_choose_figure2_textHighlighted(const QString &arg1) {
    if (arg1 == "vector") {
        ui->form_subfigure1->hide();
        ui->form_subfigure2->hide();
        ui->form_figure2->hide();
        ui->input_figure2->hide();
        delete ui->input_figure2;
        ui->input_figure2 = vector_view();
        ui->input_figure2->move(280, 500);
        ui->input_figure2->show();
    }
    else {
        ui->form_subfigure1->hide();
        ui->form_subfigure2->hide();
        delete ui->form_figure2;
        ui->form_figure2 = change_combobox(2, arg1);
        ui->form_figure2->show();
        ui->form_figure2->move(290, 420);
        ui->form_figure2->textHighlighted(ui->form_figure2->currentText());
    }
}

void AngelWindow::on_form_figure1_textHighlighted(const QString &arg1) {
    ui->form_subfigure1->hide();
    if (arg1 == "by line and point") {
        ui->form_subfigure1->show();
        ui->form_subfigure1->textHighlighted(ui->form_subfigure1->currentText());
        return;
    }
    ui->input_figure1->hide();
    delete ui->input_figure1;
    ui->input_figure1 = figure_view(arg1);
    ui->input_figure1->show();
    ui->input_figure1->move(280, 260);
}

void AngelWindow::on_form_figure2_textHighlighted(const QString &arg1) {
    ui->form_subfigure2->hide();
    if (arg1 == "by line and point") {
        ui->form_subfigure2->show();
        ui->form_subfigure2->textHighlighted(ui->form_subfigure2->currentText());
        return;
    }
    ui->input_figure2->hide();
    delete ui->input_figure2;
    ui->input_figure2 = figure_view(arg1);
    ui->input_figure2->show();
    ui->input_figure2->move(280, 500);
}

void AngelWindow::on_form_subfigure1_textHighlighted(const QString &arg1) {
    ui->input_figure1->hide();
    delete ui->input_figure1;
    ui->input_figure1 = figure_view("by line and point", arg1);
    ui->input_figure1->show();
    ui->input_figure1->move(280, 260);
}

void AngelWindow::on_form_subfigure2_textHighlighted(const QString &arg1) {
    ui->input_figure2->hide();
    delete ui->input_figure2;
    ui->input_figure2 = figure_view("by line and point", arg1);
    ui->input_figure2->show();
    ui->input_figure2->move(280, 500);
}

void AngelWindow::on_answer_clicked() {
    auto infoFigure1 = ui->input_figure1->children();
    auto infoFigure2 = ui->input_figure2->children();

    auto get_vector =
            [](QList<QObject*>& info) -> vector {
        double x, y, z;
        int i = 1;
        for (const auto& obj : info) {
            auto tmp = qobject_cast<QLineEdit*>(obj);
            if (tmp != nullptr) {
                double& cur = i == 1 ? x : i == 2 ? y : z;
                ++i;
                bool ok;
                cur = tmp->text().toDouble(&ok);
                if (!ok) {
                    // обработать ошибку
                }
            }
        }
        return {x, y, z};
    };
    auto get_line_by_point_and_vector =
            [](QList<QObject*>& info) -> line {
        point p;
        vector v;
        for (int f = 0; f < 2; ++f) {
            double x, y, z;
            int i = 1;
            for (auto it = info.begin() + f * 10; i < 4; ++it) {
                auto tmp = qobject_cast<QLineEdit*>(*it);
                if (tmp != nullptr) {
                    double& cur = i == 1 ? x : i == 2 ? y : z;
                    ++i;
                    bool ok;
                    cur = tmp->text().toDouble(&ok);
                    if (!ok) {
                        // обработать ошибку
                    }
                }
            }
            if (f == 0)
                p.set_coord(x, y, z);
            else
                v.set_coord(x, y ,z);
        }
        return {p, v};
    };
    auto get_line_by_classic_form =
            [](QList<QObject*>& info) -> line {
        plate p1, p2;

        for (int f = 0; f < 2; ++f) {
            double a, b, c, d;
            int i = 1;
            for (auto it = info.begin() + f * 11; i < 5; ++it) {
                auto tmp = qobject_cast<QLineEdit*>(*it);
                if (tmp != nullptr) {
                    double& cur = i == 1 ? a : i == 2 ? b : i == 3 ? c : d;
                    ++i;
                    bool ok;
                    cur = tmp->text().toDouble(&ok);
                    if (!ok) {
                        // обработать ошибку
                    }
                }
            }
            if (f == 0)
                p1.set_equation(a, b, c, d);
            else
                p2.set_equation(a, b, c, d);
        }
        return {p1, p2};
    };
    auto get_line_by_canonical_and_parametric_form =
            [](QList<QObject*>& info) -> line {
        double mx, my, mz, px, py, pz;
        int i = 1;
        for (auto it = info.begin(); i < 7; ++it) {
            auto tmp = qobject_cast<QLineEdit*>(*it);
            if (tmp != nullptr) {
                double& cur = i == 1 ? px : i == 2 ? mx : i == 3 ? py : i == 4 ? my : i == 5 ? pz : mz;
                ++i;
                bool ok;
                cur = tmp->text().toDouble(&ok);
                if (!ok) {
                    // обработать ошибку
                }
            }
        }
        return { point(px, py, pz), vector(mx, my, mz) };
    };
    auto get_plate_by_three_points =
            [](QList<QObject*>& info) -> plate {
        point p1, p2, p3;

        for (int f = 0; f < 3; ++f) {
            double x, y, z;
            int i = 1;
            for (auto it = info.begin() + f * 8; i < 4; ++it) {
                auto tmp = qobject_cast<QLineEdit*>(*it);
                if (tmp != nullptr) {
                    double& cur = i == 1 ? x : i == 2 ? y : z;
                    ++i;
                    bool ok;
                    cur = tmp->text().toDouble(&ok);
                    if (!ok) {
                        // обработать ошибку
                    }
                }
            }
            if (f == 0)
                p1.set_coord(x, y, z);
            else if (f == 1)
                p2.set_coord(x, y, z);
            else
                p3.set_coord(x, y, z);
        }
    };
    auto get_plate_by_line_and_point =
            [&](QList<QObject*>& info, const QString& line_form) -> plate {
        line l;
        if (line_form == "by point and vector")
            l = get_line_by_point_and_vector(info);
        if (line_form == "by classic form")
            l = get_line_by_classic_form(info);
        if (line_form == "by canonical form" || line_form == "by parametric form")
            l = get_line_by_canonical_and_parametric_form(info);

        double x, y, z;
        int i = 1;
        for (auto it = info.end() - 8 ; i < 4; ++it) {
            auto tmp = qobject_cast<QLineEdit*>(*it);
            if (tmp != nullptr) {
                double& cur = i == 1 ? x : i == 2 ? y : z;
                ++i;
                bool ok;
                cur = tmp->text().toDouble(&ok);
                if (!ok) {
                    // обработать ошибку
                }
            }
        }
        return { l, point(x, y, z) };
    };
    auto get_plate_by_basic_form =
            [](QList<QObject*>& info) -> plate {
        double a, b, c, d;
        int i = 1;

        for (const auto& obj : info) {
            auto tmp = qobject_cast<QLineEdit*>(obj);
            if (tmp != nullptr) {
                double& cur = i == 1 ? a : i == 2 ? b : i == 3 ? c : d;
                ++i;
                bool ok;
                cur = tmp->text().toDouble(&ok);
                if (!ok) {
                    // обработать ошибку
                }
            }
        }
        return { a, b, c, d };
    };

    vector vec_fig1(false);
    line lin_fig1(false);
    plate pla_fig1(false);

    if (ui->choose_figure1->currentText() == "vector") {
        vec_fig1 = get_vector(infoFigure1);
    } else if (ui->choose_figure1->currentText() == "line") {
        if (ui->form_figure1->currentText() == "by point and vector")
            lin_fig1 = get_line_by_point_and_vector(infoFigure1);
        else if (ui->form_figure1->currentText() == "by classic form")
            lin_fig1 = get_line_by_classic_form(infoFigure1);
        else
            lin_fig1 = get_line_by_canonical_and_parametric_form(infoFigure1);
    } else {
        if (ui->form_figure1->currentText() == "by three points")
            pla_fig1 = get_plate_by_three_points(infoFigure1);
        else if (ui->form_figure1->currentText() == "by line and point")
            pla_fig1 = get_plate_by_line_and_point(infoFigure1, ui->form_subfigure1->currentText());
        else
            pla_fig1 = get_plate_by_basic_form(infoFigure1);
    }

    vector vec_fig2(false);
    line lin_fig2(false);
    plate pla_fig2(false);

    if (ui->choose_figure2->currentText() == "vector") {
        vec_fig2 = get_vector(infoFigure2);
    } else if (ui->choose_figure2->currentText() == "line") {
        if (ui->form_figure2->currentText() == "by point and vector")
            lin_fig2 = get_line_by_point_and_vector(infoFigure2);
        else if (ui->form_figure2->currentText() == "by classic form")
            lin_fig2 = get_line_by_classic_form(infoFigure2);
        else
            lin_fig2 = get_line_by_canonical_and_parametric_form(infoFigure2);
    } else {
        if (ui->form_figure2->currentText() == "by three points")
            pla_fig2 = get_plate_by_three_points(infoFigure2);
        else if (ui->form_figure2->currentText() == "by line and point")
            pla_fig2 = get_plate_by_line_and_point(infoFigure2, ui->form_subfigure2->currentText());
        else
            pla_fig2 = get_plate_by_basic_form(infoFigure2);
    }

    double answer;

    if (vec_fig1 != vector(false)) {
        if (vec_fig2 != vector(false))
            answer = find_angel(vec_fig1, vec_fig2);
        if (lin_fig2 != line(false))
            answer = find_angel(vec_fig1, lin_fig2.get_direct_vector());
        if (pla_fig2 != plate(false))
            answer = asin(1) - find_angel(vec_fig1, pla_fig2.get_normal());
    }
    if (lin_fig1 != line(false)) {
        if (vec_fig2 != vector(false))
            answer = find_angel(lin_fig1.get_direct_vector(), vec_fig2);
        if (lin_fig2 != line(false))
            answer = find_angel(lin_fig1, lin_fig2);
        if (pla_fig2 != plate(false))
            answer = find_angel(pla_fig2, lin_fig1);
    }
    if (pla_fig1 != plate(false)) {
        if (vec_fig2 != vector(false))
            answer = asin(1) - find_angel(pla_fig1.get_normal(), vec_fig2);
        if (lin_fig2 != line(false))
            answer = find_angel(pla_fig1, lin_fig2);
        if (pla_fig2 != plate(false))
            answer = find_angel(pla_fig1, pla_fig2);
    }

    std::string ans = "<b><span style=\" font-size:12pt; font-weight:700;\">&phi; = "
            + std::to_string(answer * 180 / (2 * asin(1))) + "<sup>0</sup> (" + std::to_string(answer) + " &pi;)<bt>";
    ui->output->setText(ans.c_str());
}

