#ifndef FILTERSWINDOW_H
#define FILTERSWINDOW_H

#include <QDialog>

namespace Ui {
class FiltersWindow;
}

class FiltersWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FiltersWindow(QWidget *parent = nullptr);
    ~FiltersWindow();

private slots :
    void on_retBtn_clicked();

private:
    Ui::FiltersWindow *ui;
};

#endif // FILTERSWINDOW_H
