#include "histogram.h"
#include "ui_histogram.h"

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
