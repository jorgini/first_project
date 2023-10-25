#include "src/widgets/headers/intersectwindow.h"
#include "form/ui_intersectwindow.h"

IntersectWindow::IntersectWindow(QWidget *parent, QMainWindow *qMain) :
        QWidget(parent), ui(new Ui::IntersectWindow), start(qMain) {
    ui->setupUi(this);
}

IntersectWindow::~IntersectWindow()
{
    delete ui;
    start->show();
}
