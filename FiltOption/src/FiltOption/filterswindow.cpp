#include "filterswindow.h"
#include "../../../build-ImageProc-Desktop-Release/FiltOption/FiltOption_autogen/include/ui_filterswindow.h"

FiltersWindow::FiltersWindow(QWidget *parent) : QDialog(parent), 
                                                ui(new Ui::FiltersWindow)
{
    ui->setupUi(this);
}

FiltersWindow::~FiltersWindow() { delete ui; }

void FiltersWindow::on_retBtn_clicked()
{
    this->hide();
    main = new histogram(this);
    main->show();
}