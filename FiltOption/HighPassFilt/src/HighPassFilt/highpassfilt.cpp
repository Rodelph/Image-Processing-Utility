#include "highpassfilt.h"
#include "ui_highpassfilt.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"

highpassfilt::highpassfilt(QWidget *parent) : QDialog(parent),
                                              ui(new Ui::highpassfilt)
{
    ui->setupUi(this);
}

highpassfilt::~highpassfilt() { delete ui; }

void highpassfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

void highpassfilt::on_foldBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(nullptr,
                                                "Open Image File",
                                                QDir::currentPath() + "/resources/Images/**",
                                                ("Image files (*.png *.jpg *.jpeg")
                                                );
}