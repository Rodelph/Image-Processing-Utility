#include "freqfilt.h"
#include "ui_freqfilt.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"

freqfilt::freqfilt(QWidget *parent) : QDialog(parent),
                                      ui(new Ui::freqfilt)
{
    ui->setupUi(this);
}

freqfilt::~freqfilt() { delete ui; }

void freqfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

QString freqfilt::on_foldBtn_clicked()
{
    path = QFileDialog::getOpenFileName(this,
                                        "Open Image File",
                                        pathToImages + "Images/**",
                                        "Image (*.png *.jpg *.jpeg)"
                                        );
    QPixmap map(path);
    width = ui->imageFoldLbl->width();
    height = ui->imageFoldLbl->height();
    ui->imageFoldLbl->setPixmap(map.scaled(width, height, Qt::KeepAspectRatio));
    return path;
}


void freqfilt::on_transBtn_clicked()
{
    cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);
    cv::Mat padded;

    m = cv::getOptimalDFTSize(img.rows);
    n = cv::getOptimalDFTSize(img.cols);

    cv::copyMakeBorder(img, 
                       padded, 
                       0, 
                       m - img.rows, 
                       0, 
                       n - img.cols, 
                       cv::BORDER_CONSTANT, 
                       cv::Scalar::all(0)
                       );
    
    cv::Mat planes[] =  {
                            cv::Mat_<float>(padded), 
                            cv::Mat::zeros(padded.size(), CV_32F)
                        };
    cv::Mat complexImg;

    cv::merge(planes, 2, complexImg);
    cv::dft(complexImg, complexImg);
    cv::split(complexImg, planes);
    cv::magnitude(planes[0], planes[1], planes[0]);
    cv::Mat magImage = planes[0];
    magImage += cv::Scalar::all(1);
    cv::log(magImage, magImage);
    magImage = magImage(cv::Rect(0, 
                                 0, 
                                 magImage.cols & -2, 
                                 magImage.rows & -2 
                                 ));
    
    cx = magImage.cols / 2;
    cy = magImage.rows / 2;

    cv::Mat q0(magImage, cv::Rect(0, 0, cx, cy));
    cv::Mat q1(magImage, cv::Rect(cx, 0, cx, cy));
    cv::Mat q2(magImage, cv::Rect(0, cy, cx, cy));
    cv::Mat q3(magImage, cv::Rect(cx, cy, cx, cy));

    cv::Mat tmp;
    q0.copyTo(tmp);
    q3.copyTo(q0);
    tmp.copyTo(q3);

    q1.copyTo(tmp);
    q2.copyTo(q1);
    tmp.copyTo(q2);

    cv::normalize(magImage, magImage, 0, 1, cv::NORM_MINMAX);
    cv::imshow("Spectrum", magImage);
    cv::waitKey();
    cv::destroyAllWindows();
}