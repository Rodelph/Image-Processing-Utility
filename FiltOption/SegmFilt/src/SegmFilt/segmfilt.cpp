#include "segmfilt.h"
#include "ui_segmfilt.h"
#include "../../FiltOption/src/FiltOption/filterswindow.h"

segmfilt::segmfilt(QWidget *parent) : QDialog(parent),
                                      ui(new Ui::segmfilt)
{
    ui->setupUi(this);
}

segmfilt::~segmfilt() { delete ui; }

void segmfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

void segmfilt::on_foldBtn_clicked()
{   
    QString path = QFileDialog::getOpenFileName(nullptr,
                                                "Open Image File",
                                                QDir::currentPath() + "/resources/Images/**",
                                                ("Image files (*.png *.jpg *.jpeg")
                                                 );
            
}