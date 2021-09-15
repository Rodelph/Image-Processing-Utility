#ifndef FREQFILT_H
#define FREQFILT_H

#include <QDialog>
#include <QFileDialog>
#include <QErrorMessage>

#include <opencv4/opencv2/core.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/imgproc.hpp>

namespace Ui {
class freqfilt;
}

class freqfilt : public QDialog
{
    Q_OBJECT

public:
    explicit freqfilt(QWidget *parent = nullptr);
    ~freqfilt();

private slots :
    void on_retBtn_clicked();
    QString on_foldBtn_clicked();
    void on_transBtn_clicked();

private:
    Ui::freqfilt *ui;
    const QString pathToImages = QDir::currentPath() + "/resources/";
    QString path;
    QErrorMessage* errMsg;
    int m, n, cx, cy, width, height;
};

#endif // FREQFILT_H
