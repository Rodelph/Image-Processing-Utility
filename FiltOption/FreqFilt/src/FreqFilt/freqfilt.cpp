#include "freqfilt.h"
#include "ui_freqfilt.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"

freqfilt::freqfilt(QWidget *parent) : QDialog(parent),
                                      ui(new Ui::freqfilt)
{
    ui->setupUi(this);
}

freqfilt::~freqfilt() { delete ui; }

void freqfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

void freqfilt::on_foldBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(nullptr,
                                                "Open Image File",
                                                QDir::currentPath() + "/resources/Images/**",
                                                ("Image files (*.png *.jpg *.jpeg")
                                                );
}
