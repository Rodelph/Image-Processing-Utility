#include "filterswindow.h"
#include "ui_filterswindow.h"
#include "../../../HistOption/src/HistOption/histogram.h"
#include "../../HighPassFilt/src/HighPassFilt/highpassfilt.h"
#include "../../LowPassFilt/src/LowPassFilt/lowpassfilt.h"
#include "../../FreqFilt/src/FreqFilt/freqfilt.h"
#include "../../MedFilt/src/MedFilt/medfilt.h"
#include "../../ThreshFilt/src/ThreshFilt/threshfilt.h"


FiltersWindow::FiltersWindow(QWidget *parent) : QDialog(parent), 
                                                ui(new Ui::FiltersWindow)
{
    ui->setupUi(this);
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
void FiltersWindow::on_lpBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    lowpassfilt lpFilt;
    lpFilt.setModal(true);
    lpFilt.exec();
}

void FiltersWindow::on_freqBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    freqfilt frFilt;
    frFilt.setModal(true);
    frFilt.exec();
}

void FiltersWindow::on_medBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    medfilt med;
    med.setModal(true);
    med.exec();
}

void FiltersWindow::on_treshBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    treshfilt tfilt;
    tfilt.setModal(true);
    tfilt.exec();
}