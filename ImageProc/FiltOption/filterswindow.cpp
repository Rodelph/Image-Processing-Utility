#include "filterswindow.h"
#include "ui_filterswindow.h"

FiltersWindow::FiltersWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FiltersWindow)
{
    ui->setupUi(this);
}

FiltersWindow::~FiltersWindow()
{
    delete ui;
}
