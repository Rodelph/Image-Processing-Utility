#ifndef HIGHPASSFILT_H
#define HIGHPASSFILT_H

#include <QDialog>
#include <QFileDialog>
#include <QErrorMessage>
#include <QPixmap>

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

namespace Ui { class highpassfilt; }

class highpassfilt : public QDialog
{
    Q_OBJECT

public:
    explicit highpassfilt(QWidget *parent = nullptr);
    ~highpassfilt();
    cv::Mat make_Kernel5x5();
    cv::Mat make_Kernel3x3();

private slots :
    QString on_foldBtn_clicked();

    void on_retBtn_clicked();
    void on_transformBtn_clicked();
    void on_confBtn_clicked();
    bool on_x3rad_clicked();
    bool on_x5rad_clicked();

private:
    Ui::highpassfilt *ui;
    int width, height;
    QString path;
    const QString pathToImages = QDir::currentPath() + "/resources/";
    QErrorMessage* errMsg;
    cv::Mat kernel;
    bool r3x3 = false, r5x5 = false;
};

#endif // HIGHPASSFILT_H
