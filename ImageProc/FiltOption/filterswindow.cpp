#include "filterswindow.h"
#include "./ui_filterswindow.h"
#include <iostream>

FiltersWindow::FiltersWindow(QWidget *parent) : QDialog(parent), 
                                                ui(new Ui::FiltersWindow)
{
    ui->setupUi(this);
}

FiltersWindow::~FiltersWindow() { delete ui; }

void FiltersWindow::on_retBtn_clicked()
{
    std::cout << "Hello";
}