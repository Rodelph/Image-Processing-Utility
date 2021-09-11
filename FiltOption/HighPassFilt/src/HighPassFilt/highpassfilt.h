#ifndef HIGHPASSFILT_H
#define HIGHPASSFILT_H

#include <QDialog>
#include <QFileDialog>
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
    void on_retBtn_clicked();
    QString on_foldBtn_clicked();
    void on_transformBtn_clicked();

private:
    Ui::highpassfilt *ui;
    int width, height;
    QString path;
    QString pathToImages = QDir::currentPath() + "/resources/";
    std::string pathToSave = pathToImages.toStdString();
    QString data;
};

#endif // HIGHPASSFILT_H