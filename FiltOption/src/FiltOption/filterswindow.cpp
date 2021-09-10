#include "filterswindow.h"
#include "../../../build-ImageProc-Desktop-Release/FiltOption/FiltOption_autogen/include/ui_filterswindow.h"
#include "../../../HistOption/src/HistOption/histogram.h"
#include "../../HighPassFilt/src/HighPassFilt/highpassfilt.h"

FiltersWindow::FiltersWindow(QWidget *parent) : QDialog(parent), 
                                                ui(new Ui::FiltersWindow)
{
    ui->setupUi(this);
    Qt::WA_DeleteOnClose;
}

FiltersWindow::~FiltersWindow() { delete ui; }

void FiltersWindow::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    histogram main;
    main.setModal(true);
    main.exec();
}
void FiltersWindow::on_hpBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    highpassfilt hpFilt;
    hpFilt.setModal(true);
    hpFilt.exec();
}