#include "histogram.h"
#include "../../../build-ImageProc-Desktop-Release/HistOption/HistOption_autogen/include/ui_histogram.h"

histogram::histogram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::histogram)
{
    ui->setupUi(this);
}

histogram::~histogram()
{
    delete ui;
}