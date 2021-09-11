#include "medfilt.h"
#include "ui_medfilt.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"

medfilt::medfilt(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::medfilt)
{
    ui->setupUi(this);
}

medfilt::~medfilt() { delete ui; }

void medfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

void medfilt::on_foldBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(nullptr,
                                                "Open Image File",
                                                QDir::currentPath() + "/resources/Images/**",
                                                ("Image files (*.png *.jpg *.jpeg")
                                                );
}