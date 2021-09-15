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

    QString on_foldBtn_clicked();

private:
    Ui::histogram *ui;
    int width, height, hist_w = 512, hist_h = 400, bin_w;
    QString path;
    const QString pathToImages = QDir::currentPath() + "/resources/";
    QErrorMessage* errMsg;
    const int histsize = 256;
    bool uniform = true, accumulate = false;
    cv::Mat b_hist, g_hist, r_hist;

};

#endif // HISTOGRAM_H
