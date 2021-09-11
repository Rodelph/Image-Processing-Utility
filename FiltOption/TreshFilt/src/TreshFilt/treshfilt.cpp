#include "treshfilt.h"
#include "ui_treshfilt.h"
#include "../../../src/FiltOption/filterswindow.h"

treshfilt::treshfilt(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::treshfilt)
{
    ui->setupUi(this);
}

treshfilt::~treshfilt() { delete ui; }

void treshfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

void treshfilt::on_foldBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(nullptr,
                                                "Open Image File",
                                                QDir::currentPath() + "/resources/Images/**",
                                                ("Image files (*.png *.jpg *.jpeg")
                                                );
}