#include "src/widgets/headers/mainwindow.h"
#include "form/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_triggered() {
    QApplication::quit();
}


void MainWindow::on_button_graph_clicked() {
    hide();
    g = new GraphWindow(nullptr, this);
    g->setAttribute(Qt::WA_DeleteOnClose, true);
    g->show();
}

void MainWindow::on_button_intersect_clicked() {
    hide();
    i = new IntersectWindow(nullptr, this);
    i->setAttribute(Qt::WA_DeleteOnClose, true);
    i->show();
}

void MainWindow::on_button_angel_clicked() {
    hide();
    a = new AngelWindow(nullptr, this);
    a->setAttribute(Qt::WA_DeleteOnClose, true);
    a->show();
}

void MainWindow::on_button_distance_clicked() {
    hide();
    d = new DistanceWindow(nullptr, this);
    d->setAttribute(Qt::WA_DeleteOnClose, true);
    d->show();
}

void MainWindow::on_button_operator_clicked() {
    hide();
    o = new OperatorWindow(nullptr, this);
    o->setAttribute(Qt::WA_DeleteOnClose, true);
    o->show();
}
