#ifndef HIGHPASSFILT_H
#define HIGHPASSFILT_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
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
    cv::Mat make_Kernel();

private slots :
    QString on_foldBtn_clicked();

    void on_retBtn_clicked();
    void on_transformBtn_clicked();
    void on_confBtn_clicked();

private:
    Ui::highpassfilt *ui;
    int width, height;
    QString path;
    const QString pathToImages = QDir::currentPath() + "/resources/";
    const std::string pathToSave = pathToImages.toStdString();
    QString data;

    cv::Mat kernel;
};

#endif // HIGHPASSFILT_H
