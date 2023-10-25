#ifndef ANGELWINDOW_H
#define ANGELWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QLayout>
#include <QLabel>
#include <QLineEdit>
#include <QLine>
#include <QComboBox>
#include "src/lib/figures.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class AngelWindow;
}
QT_END_NAMESPACE

class AngelWindow : public QWidget {
    Q_OBJECT

public:
    explicit AngelWindow(QWidget *parent = nullptr, QMainWindow *main = nullptr);
    ~AngelWindow() override;

private slots:
    void on_choose_figure1_textHighlighted(const QString &arg1);
    void on_choose_figure2_textHighlighted(const QString &arg1);
    void on_form_figure1_textHighlighted(const QString &arg1);
    void on_form_figure2_textHighlighted(const QString &arg1);
    void on_form_subfigure1_textHighlighted(const QString &arg1);
    void on_form_subfigure2_textHighlighted(const QString &arg1);
    void on_answer_clicked();

private:
    Ui::AngelWindow *ui;
    QMainWindow *start;

    QWidget *vector_view();
    QWidget *figure_view(const QString& form, const QString& subform = nullptr);
    QComboBox *change_combobox(int i, const QString& figure);
};


#endif // ANGELWINDOW_H
