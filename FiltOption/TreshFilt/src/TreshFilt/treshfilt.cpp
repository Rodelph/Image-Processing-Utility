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

QString treshfilt::on_foldBtn_clicked()
{
    path = QFileDialog::getOpenFileName(this,
                                        "Open Image File",
                                        pathToImages + "Images/**",
                                        "Images (*.png *.jpg *.jpeg)"
                                        );
    QPixmap map(path);
    width = ui->foldImageLbl->width();
    height = ui->foldImageLbl->height();
    ui->foldImageLbl->setPixmap(map.scaled(width, height, Qt::KeepAspectRatio));

    return path;    
}

