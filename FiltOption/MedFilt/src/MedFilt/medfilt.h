#ifndef MEDFILT_H
#define MEDFILT_H

#include <QDialog>
#include <QFileDialog>

#include <opencv4/opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/imgproc.hpp>
#include <opencv4/opencv2/highgui.hpp>

namespace Ui {
class medfilt;
}

class medfilt : public QDialog
{
    Q_OBJECT

public:
    explicit medfilt(QWidget *parent = nullptr);
    ~medfilt();

private slots :
    void on_retBtn_clicked();
    QString on_foldBtn_clicked();
    void on_transBtn_clicked();

private:
    Ui::medfilt *ui;
    QString path, pathToImages = QDir::currentPath() + "/resources/";
    int width, height;
};

#endif // MEDFILT_H
