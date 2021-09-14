#ifndef LOWPASSFILT_H
#define LOWPASSFILT_H

#include <QDialog>
#include <QFileDialog>
#include <QErrorMessage>
#include <QPixmap>

#include <opencv4/opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgproc.hpp>

namespace Ui { class lowpassfilt; }

class lowpassfilt : public QDialog
{
    Q_OBJECT

public:
    explicit lowpassfilt(QWidget *parent = nullptr);
    ~lowpassfilt();
    cv::Mat make_Kernel();

private slots :
    void on_retBtn_clicked();
    void on_transBtn_clicked();
    void on_confBtn_clicked();

    QString on_foldBtn_clicked();

private:
    Ui::lowpassfilt *ui;
    QString path, data;
    uint32_t width, height;
    QErrorMessage* errMsg;
    cv::Mat kernel;
    int sum;
};

#endif // LOWPASSFILT_H
