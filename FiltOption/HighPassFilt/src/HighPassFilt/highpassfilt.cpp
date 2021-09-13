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
    
    cv::filter2D(img, dst, img.depth(), kernel);
        
    cv::imwrite(pathToSave + "SavedImages/resultHpFilter.png", dst);
    QPixmap resTransform(data+ "SavedImages/resultHpFilter.png");
    width = ui->imageTrsLbl->width();
    height = ui->imageTrsLbl->height();
    ui->imageTrsLbl->setPixmap(resTransform.scaled(width, height, Qt::KeepAspectRatio));
}

void highpassfilt::on_confBtn_clicked()
{
    if ( mat1 == 0 &&
         mat2 == 0 &&
         mat3 == 0 &&
         mat4 == 0 &&
         mat5 == 0 &&
         mat6 == 0 &&
         mat7 == 0 &&
         mat8 == 0 &&
         mat9 == 0 )
    {
        this->box = new QMessageBox(this);
        this->box->setWindowTitle("Notification");
        this->box->setText("No all zero");
        this->box->open();
    }
    else 
    {
        kernel = (cv::Mat_<char>(3,3) << mat1, mat2, mat3,
                                        mat4, mat5, mat6,
                                        mat7, mat8, mat9 );
    }
}

int highpassfilt::on_spinBox_1_valueChanged() { return mat1 = ui->spinBox_1->value(); }
int highpassfilt::on_spinBox_2_valueChanged() { return mat2 = ui->spinBox_2->value(); }
int highpassfilt::on_spinBox_3_valueChanged() { return mat3 = ui->spinBox_3->value(); }
int highpassfilt::on_spinBox_4_valueChanged() { return mat4 = ui->spinBox_4->value(); }
int highpassfilt::on_spinBox_5_valueChanged() { return mat5 = ui->spinBox_5->value(); }
int highpassfilt::on_spinBox_6_valueChanged() { return mat6 = ui->spinBox_6->value(); }
int highpassfilt::on_spinBox_7_valueChanged() { return mat7 = ui->spinBox_7->value(); }
int highpassfilt::on_spinBox_8_valueChanged() { return mat8 = ui->spinBox_8->value(); }
int highpassfilt::on_spinBox_9_valueChanged() { return mat9 = ui->spinBox_9->value(); }