#ifndef LOWPASSFILT_H
#define LOWPASSFILT_H

#include <QDialog>
#include <QFileDialog>
#include <QErrorMessage>
#include <QPixmap>

#include <opencv4/opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgproc.hpp>

#include <boost/algorithm/string/predicate.hpp>

#include "../../../src/FiltOption/filterswindow.h"

namespace Ui { class lowpassfilt; }

class lowpassfilt : public QDialog
{
    Q_OBJECT

public:
    explicit lowpassfilt(QWidget *parent = nullptr);
    ~lowpassfilt();
    cv::Mat make_Kernel5x5();
    cv::Mat make_Kernel3x3();

private slots :
    void on_retBtn_clicked();
    void on_transBtn_clicked();
    void on_confBtn_clicked();
    bool on_x3rad_clicked();
    bool on_x5rad_clicked();

    QString on_foldBtn_clicked();

private:
    Ui::lowpassfilt *ui;
    QString path, data;
    uint32_t width, height;
    QErrorMessage* errMsg;
    cv::Mat kernel;
    int sum;
    bool x3state = false, x5state = false;
    FiltersWindow filt;
};

#endif // LOWPASSFILT_H
