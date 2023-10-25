#ifndef INTERSECTWINDOW_H
#define INTERSECTWINDOW_H

#include <QWidget>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class IntersectWindow;
}
QT_END_NAMESPACE

class IntersectWindow : public QWidget {
    Q_OBJECT

public:
    explicit IntersectWindow(QWidget *parent = nullptr, QMainWindow *main = nullptr);
    ~IntersectWindow();

private:
    Ui::IntersectWindow *ui;
    QMainWindow *start;
};

#endif // INTERSECTWINDOW_H
