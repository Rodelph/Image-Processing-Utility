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

void treshfilt::on_treshSlide_valueChanged(int value) { ui->treshVal->setText(QString::number(ui->treshSlide->value())); }

void treshfilt::on_transBtn_clicked()
{
    cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);
    cv::Mat dst;

    cv::threshold(img, dst, ui->treshSlide->value(), maxVal, cv::THRESH_BINARY);
    cv::imshow("Gray scaled image", img);
    cv::imshow("Threshold", dst);
    cv::waitKey();
    cv::destroyAllWindows();
}