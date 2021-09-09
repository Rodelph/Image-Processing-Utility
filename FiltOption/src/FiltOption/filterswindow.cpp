#include "filterswindow.h"
#include "../../../build-ImageProc-Desktop-Release/FiltOption/FiltOption_autogen/include/ui_filterswindow.h"
#include "../../../../HistOption/src/HistOption/histogram.h"

FiltersWindow::FiltersWindow(QWidget *parent) : QDialog(parent), 
                                                ui(new Ui::FiltersWindow)
{
    ui->setupUi(this);
}

FiltersWindow::~FiltersWindow() { delete ui; QApplication::exit();}

void FiltersWindow::on_retBtn_clicked()
{
    this->hide();
    histogram main;
    main.exec();
}