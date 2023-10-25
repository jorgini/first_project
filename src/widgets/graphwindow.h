#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include <QWidget>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GraphWindow; }
QT_END_NAMESPACE

class GraphWindow : public QWidget {
    Q_OBJECT

public:
    explicit GraphWindow(QWidget *parent = nullptr, QMainWindow* main = nullptr);
    ~GraphWindow() override;

private:
    Ui::GraphWindow *ui;
    QMainWindow *start;
};

#endif // GRAPHWINDOW_H
