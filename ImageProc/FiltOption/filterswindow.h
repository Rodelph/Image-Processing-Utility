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

private:
    Ui::FiltersWindow *ui;
};

#endif // FILTERSWINDOW_H
