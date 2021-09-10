#include "lowpassfilt.h"
#include "ui_lowpassfilt.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"

lowpassfilt::lowpassfilt(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::lowpassfilt)
{
    ui->setupUi(this);
}

lowpassfilt::~lowpassfilt() { delete ui; }

void lowpassfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

void lowpassfilt::on_foldBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(nullptr,
                                                "Open Image File",
                                                QDir::currentPath() + "/resources/Images/**",
                                                ("Image files (*.png *.jpg *.jpeg")
                                                );
}
