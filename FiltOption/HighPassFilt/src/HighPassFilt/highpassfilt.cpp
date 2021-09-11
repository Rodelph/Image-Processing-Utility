#include "highpassfilt.h"
#include "ui_highpassfilt.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"
#include <iostream>

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

QString highpassfilt::on_foldBtn_clicked()
{
    path = QFileDialog::getOpenFileName (this,
                                        "Open Image File",
                                        pathToImages + "Images/**",
                                        "Images (*.png *.jpg *.jpeg)"
                                        );       
    QPixmap map(path);
    width = ui->imgFoldLbl->width();
    height = ui->imgFoldLbl->height();
    ui->imgFoldLbl->setPixmap(map.scaled(width, height, Qt::KeepAspectRatio));
    return path;
}

void highpassfilt::on_transformBtn_clicked()
{
    cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);
    cv::Mat dst;
    data = QString::fromStdString(pathToSave);

    cv::Mat kernel = (cv::Mat_<char>(3,3) <<  0, -1,  0,
                                             -1,  5, -1,
                                              0, -1,  0);
    
    cv::filter2D(img, dst, img.depth(), kernel);

    cv::imwrite(pathToSave + "SavedImages/resultHpFilter.png", dst);
    QPixmap resTransform(data+ "SavedImages/resultHpFilter.png");
    width = ui->imageTrsLbl->width();
    height = ui->imageTrsLbl->height();
    ui->imageTrsLbl->setPixmap(resTransform.scaled(width, height, Qt::KeepAspectRatio));
}