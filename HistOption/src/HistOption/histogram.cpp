#include "histogram.h"
#include "ui_histogram.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"
#include <iostream>

histogram::histogram(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::histogram)
{
    ui->setupUi(this);
    Qt::WA_DeleteOnClose;
}

histogram::~histogram() { delete ui; }

void histogram::on_filtBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    FiltersWindow main;
    main.setModal(true);
    main.exec();
}

QString histogram::on_foldBtn_clicked()
{
    path = QFileDialog::getOpenFileName(this,
                                        "Open Image File",
                                        pathToImages + "Images/**",
                                        "Image (*.png *.jpg *.jpeg)"
                                        );
    QPixmap map(path);
    width = ui->foldImage->width();
    height = ui->foldImage->height();
    ui->foldImage->setPixmap(map.scaled(width, height, Qt::KeepAspectRatio));
    
    return path;
}

void histogram::on_calcBtn_clicked()
{
    if(radStateRgb == true && radStateGs == false && radStateEq == false)
    {
        calc_rgb();
    }
    else if(radStateRgb == false && radStateGs == true && radStateEq == false)
    {
        calc_gs();
    }
    else if(radStateRgb == false && radStateGs == false && radStateEq == true)
    {
        calc_eq();
    }
}

void histogram::calc_gs()
{
    cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);

    std::vector<cv::Mat> bgr_planes;
    cv::split(img, bgr_planes);
    float range[] = {0, 256};
    const float* histRange[] = { range };

    cv::calcHist(&bgr_planes[0], 1, 0, cv::Mat(), b_hist, 1, &histsize, histRange, uniform, accumulate);
    
    bin_w = cvRound((double) hist_w / histsize );
    cv::Mat histImage(hist_h, hist_w, CV_8UC1, cv::Scalar(0));

    cv::normalize(b_hist, b_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

    for(int i = 0 ; i < histsize ; i++)
    {
        cv::line(histImage, cv::Point( bin_w * ( i - 1 ), hist_h - cvRound(b_hist.at<float>( i - 1 ))),
                            cv::Point( bin_w * ( i )    , hist_h - cvRound(b_hist.at<float>( i ))),
                            cv::Scalar(255, 255, 255), 1, 8, 0 );
    }

    cv::imshow("Histogram", histImage);
    cv::waitKey();
    cv::destroyAllWindows();
}

void histogram::calc_rgb()
{
    cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_COLOR);

    std::vector<cv::Mat> bgr_planes;
    cv::split(img, bgr_planes);
    float range[] = {0, 256};
    const float* histRange[] = { range };

    cv::calcHist(&bgr_planes[0], 1, 0, cv::Mat(), b_hist, 1, &histsize, histRange, uniform, accumulate);
    cv::calcHist(&bgr_planes[1], 1, 0, cv::Mat(), g_hist, 1, &histsize, histRange, uniform, accumulate);
    cv::calcHist(&bgr_planes[2], 1, 0, cv::Mat(), r_hist, 1, &histsize, histRange, uniform, accumulate);
    
    bin_w = cvRound((double) hist_w / histsize );
    cv::Mat histImage(hist_h, hist_w, CV_8UC3, cv::Scalar(0, 0, 0));

    cv::normalize(b_hist, b_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
    cv::normalize(g_hist, g_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());    
    cv::normalize(r_hist, r_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

    for(int i = 0 ; i < histsize ; i++)
    {
        cv::line(histImage, cv::Point( bin_w * ( i - 1 ), hist_h - cvRound(b_hist.at<float>( i - 1 ))),
                            cv::Point( bin_w * ( i )    , hist_h - cvRound(b_hist.at<float>( i ))),
                            cv::Scalar(255, 0, 0), 1, 8, 0 );

        cv::line(histImage, cv::Point( bin_w * ( i - 1 ), hist_h - cvRound(g_hist.at<float>( i - 1 ))),
                            cv::Point( bin_w * ( i )    , hist_h - cvRound(g_hist.at<float>( i ))),
                            cv::Scalar(0, 255, 0), 1, 8, 0 );
        
        cv::line(histImage, cv::Point( bin_w * ( i - 1 ), hist_h - cvRound(r_hist.at<float>( i - 1 ))),
                            cv::Point( bin_w * ( i )    , hist_h - cvRound(r_hist.at<float>( i ))),
                            cv::Scalar(0, 0, 255), 1, 8, 0 );
    }

    cv::imshow("Histogram", histImage);
    cv::waitKey();
    cv::destroyAllWindows();
}

void histogram::calc_eq()
{
    cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);
    cv::Mat dst;

    cv::equalizeHist(img, dst);

    std::vector<cv::Mat> bgr_planes;
    cv::split(dst, bgr_planes);
    float range[] = {0, 256};
    const float* histRange[] = { range };

    cv::calcHist(&bgr_planes[0], 1, 0, cv::Mat(), b_hist, 1, &histsize, histRange, uniform, accumulate);
    
    bin_w = cvRound((double) hist_w / histsize );
    cv::Mat histImage(hist_h, hist_w, CV_8UC1, cv::Scalar(0));

    cv::normalize(b_hist, b_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

    for(int i = 0 ; i < histsize ; i++)
    {
        cv::line(histImage, cv::Point( bin_w * ( i - 1 ), hist_h - cvRound(b_hist.at<float>( i - 1 ))),
                            cv::Point( bin_w * ( i )    , hist_h - cvRound(b_hist.at<float>( i ))),
                            cv::Scalar(255, 255, 255), 1, 8, 0 );
    }

    cv::imshow("Histogram", histImage);
    cv::waitKey();
    cv::destroyAllWindows();
}

bool histogram::on_radRgb_clicked() 
{
    radStateRgb = true ; 
    radStateGs = false ; 
    radStateEq = false ;

    return radStateRgb, radStateGs, radStateEq;
}

bool histogram::on_radGs_clicked() 
{ 
    radStateRgb = false ; 
    radStateGs = true ; 
    radStateEq = false ;

    return radStateRgb, radStateGs, radStateEq; 
}

bool histogram::on_radEq_clicked() 
{
    radStateRgb = false ; 
    radStateGs = false ; 
    radStateEq = true ;

    return radStateRgb, radStateGs, radStateEq;
}
