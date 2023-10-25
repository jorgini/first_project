#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QListWidgetItem>
#include <QLabel>
#include "graphwindow.h"
#include "intersectwindow.h"
#include "angelwindow.h"
#include "distancewindow.h"
#include "operatorwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_exit_triggered();

    void on_button_graph_clicked();

    void on_button_intersect_clicked();

    void on_button_angel_clicked();

    void on_button_distance_clicked();

    void on_button_operator_clicked();

private:
    Ui::MainWindow *ui;
    GraphWindow *g;
    IntersectWindow *i;
    AngelWindow *a;
    DistanceWindow *d;
    OperatorWindow *o;
};
#endif // MAINWINDOW_H
