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
    this->hide();
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

QString highpassfilt::on_foldBtn_clicked()
{
    path = QFileDialog::getOpenFileName ( this,
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
    
    try
    {
        cv::filter2D(img, dst, img.depth(), make_Kernel());
        cv::imshow("title", dst);
        cv::waitKey();
        cv::destroyAllWindows();
    }
    catch(cv::Exception& e)
    {
        errMsg = new QErrorMessage(this);
        errMsg->showMessage("Please chose your image by clicking "
                            "on the folder button!!");
    }
}

void highpassfilt::on_confBtn_clicked() { make_Kernel();}

cv::Mat highpassfilt::make_Kernel()
{
    kernel = (cv::Mat_<int>(5,5) << ui->spinBox_1->value(),  ui->spinBox_2->value(),  ui->spinBox_3->value(),  ui->spinBox_4->value(),  ui->spinBox_5->value()  ,
                                    ui->spinBox_6->value(),  ui->spinBox_7->value(),  ui->spinBox_8->value(),  ui->spinBox_9->value(),  ui->spinBox_10->value() ,
                                    ui->spinBox_11->value(), ui->spinBox_12->value(), ui->spinBox_13->value(), ui->spinBox_14->value(), ui->spinBox_15->value() , 
                                    ui->spinBox_16->value(), ui->spinBox_17->value(), ui->spinBox_18->value(), ui->spinBox_19->value(), ui->spinBox_20->value() ,  
                                    ui->spinBox_21->value(), ui->spinBox_22->value(), ui->spinBox_23->value(), ui->spinBox_24->value(), ui->spinBox_25->value()  
                                    );
    return kernel;
}