#include "src/widgets/headers/operatorwindow.h"
#include "form/ui_operatorwindow.h"


OperatorWindow::OperatorWindow(QWidget *parent, QMainWindow *qMain) :
        QWidget(parent), ui(new Ui::OperatorWindow), start(qMain) {
    ui->setupUi(this);
}

OperatorWindow::~OperatorWindow() {
    delete ui;
    start->show();
}
