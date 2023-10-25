#ifndef OPERATORWINDOW_H
#define OPERATORWINDOW_H

#include <QWidget>
#include<QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class OperatorWindow; }
QT_END_NAMESPACE

class OperatorWindow : public QWidget {
    Q_OBJECT

public:
    explicit OperatorWindow(QWidget *parent = nullptr, QMainWindow *qMain = nullptr);

    ~OperatorWindow() override;

private:
    Ui::OperatorWindow *ui;
    QMainWindow *start;
};


#endif //OPERATORWINDOW_H
