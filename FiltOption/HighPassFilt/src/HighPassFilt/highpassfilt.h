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

private slots :
    QString on_foldBtn_clicked();

    void on_retBtn_clicked();
    void on_transformBtn_clicked();
    void on_confBtn_clicked();

    int on_spinBox_1_valueChanged();
    int on_spinBox_2_valueChanged();
    int on_spinBox_3_valueChanged();
    int on_spinBox_4_valueChanged();
    int on_spinBox_5_valueChanged();
    int on_spinBox_6_valueChanged();
    int on_spinBox_7_valueChanged();
    int on_spinBox_8_valueChanged();
    int on_spinBox_9_valueChanged();

private:
    Ui::highpassfilt *ui;
    int width, height;
    QString path;
    QString pathToImages = QDir::currentPath() + "/resources/";
    std::string pathToSave = pathToImages.toStdString();
    QString data;
    char mat1, mat2, mat3,
         mat4, mat5, mat6,
         mat7, mat8, mat9; 

    cv::Mat kernel;
    QMessageBox *box;
};

#endif // HIGHPASSFILT_H
