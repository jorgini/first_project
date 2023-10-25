#include "src/widgets/headers/graphwindow.h"
#include "form/ui_graphwindow.h"

GraphWindow::GraphWindow(QWidget *parent, QMainWindow* qMain) :
        QWidget(parent), ui(new Ui::GraphWindow), start(qMain) {
    ui->setupUi(this);
}

GraphWindow::~GraphWindow() {
    delete ui;
    start->show();
}
