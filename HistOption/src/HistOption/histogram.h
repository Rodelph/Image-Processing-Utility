#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <QDialog>
#include <QErrorMessage>
#include <QFileDialog>
#include <QPixmap>

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

namespace Ui { class histogram; }

class histogram : public QDialog
{
    Q_OBJECT

public:
    explicit histogram(QWidget *parent = nullptr);
    ~histogram();

private slots:
    void on_filtBtn_clicked();
    void on_calcBtn_clicked();
    bool calc_gs();
    bool calc_rgb();
    bool calc_eq();

    bool on_radGs_clicked();
    bool on_radEq_clicked();
    bool on_radRgb_clicked();

    QString on_foldBtn_clicked();

private:
    Ui::histogram *ui;

    QString path;
    const QString pathToImages = QDir::currentPath() + "/resources/";
    
    QErrorMessage* errMsg;
    
    const int histsize = 256;
    int width, height, hist_w = 512, hist_h = 400, bin_w;

    cv::Mat b_hist, g_hist, r_hist;

    bool uniform = true, accumulate = false;
    bool radStateRgb, radStateGs, radStateEq;

};

#endif // HISTOGRAM_H
