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
    this->hide();
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

QString lowpassfilt::on_foldBtn_clicked()
{
    path = QFileDialog::getOpenFileName(this,
                                        "Open Image File",
                                        QDir::currentPath() + "/resources/Images/**",
                                        "Image files (*.png *.jpg *.jpeg)"
                                        );
    QPixmap map(path);
    width = ui->foldImageLbl->width();
    height = ui->foldImageLbl->height();
    ui->foldImageLbl->setPixmap(map.scaled(width, height, Qt::KeepAspectRatio));
    return path;
}

void lowpassfilt::on_transBtn_clicked()
{
    cv::Mat imgLp = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);
    cv::Mat dstLp;

    try
    {
        cv::filter2D(imgLp, dstLp, imgLp.depth(), make_Kernel());
        cv::imshow("title", dstLp);
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

void lowpassfilt::on_confBtn_clicked() { make_Kernel(); }

cv::Mat lowpassfilt::make_Kernel()
{
    sum = ui->spinBox_1->value()  + ui->spinBox_2->value()  + ui->spinBox_3->value()  + ui->spinBox_4->value()  + ui->spinBox_5->value()  +
          ui->spinBox_6->value()  + ui->spinBox_7->value()  + ui->spinBox_8->value()  + ui->spinBox_9->value()  + ui->spinBox_10->value() +
          ui->spinBox_11->value() + ui->spinBox_12->value() + ui->spinBox_13->value() + ui->spinBox_14->value() + ui->spinBox_15->value() + 
          ui->spinBox_16->value() + ui->spinBox_17->value() + ui->spinBox_18->value() + ui->spinBox_19->value() + ui->spinBox_20->value() +  
          ui->spinBox_21->value() + ui->spinBox_22->value() + ui->spinBox_23->value() + ui->spinBox_24->value() + ui->spinBox_25->value() ; 
    
    kernel = (cv::Mat_<float_t>(5,5) << ui->spinBox_1->value(),  ui->spinBox_2->value(),  ui->spinBox_3->value(),  ui->spinBox_4->value(),  ui->spinBox_5->value()  ,
                                        ui->spinBox_6->value(),  ui->spinBox_7->value(),  ui->spinBox_8->value(),  ui->spinBox_9->value(),  ui->spinBox_10->value() ,
                                        ui->spinBox_11->value(), ui->spinBox_12->value(), ui->spinBox_13->value(), ui->spinBox_14->value(), ui->spinBox_15->value() , 
                                        ui->spinBox_16->value(), ui->spinBox_17->value(), ui->spinBox_18->value(), ui->spinBox_19->value(), ui->spinBox_20->value() ,  
                                        ui->spinBox_21->value(), ui->spinBox_22->value(), ui->spinBox_23->value(), ui->spinBox_24->value(), ui->spinBox_25->value()  
                                        );
    kernel = kernel / sum;
    return kernel;
}