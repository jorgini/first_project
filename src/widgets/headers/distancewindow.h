#ifndef DISTANCEWINDOW_H
#define DISTANCEWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QComboBox>
#include <QLineEdit>
#include <QLabel>
#include <QLayout>


QT_BEGIN_NAMESPACE
namespace Ui { class DistanceWindow; }
QT_END_NAMESPACE

class DistanceWindow : public QWidget {
    Q_OBJECT

public:
    explicit DistanceWindow(QWidget *parent = nullptr, QMainWindow *qMain = nullptr);

    ~DistanceWindow() override;

private:
    Ui::DistanceWindow *ui;
    QMainWindow *start;

    QWidget *vector_view();
    QWidget *figure_view(const QString& form, const QString& subform = nullptr);
    QComboBox *change_combobox(int i, const QString& figure);
};


#endif //DISTANCEWINDOW_H
