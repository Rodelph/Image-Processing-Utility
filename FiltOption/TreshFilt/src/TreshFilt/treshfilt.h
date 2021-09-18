#ifndef TRESHFILT_H
#define TRESHFILT_H

#include <QDialog>
#include <QFileDialog>
#include <QErrorMessage>

#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/imgproc.hpp>

#include <boost/algorithm/string/predicate.hpp>

#include "../../../src/FiltOption/filterswindow.h"

namespace Ui { class treshfilt; }

class treshfilt : public QDialog
{
    Q_OBJECT

public:
    explicit treshfilt(QWidget *parent = nullptr);
    ~treshfilt();

private slots :
    void on_retBtn_clicked();
    void on_transBtn_clicked();
    void on_treshSlide_valueChanged(int value);

    QString on_foldBtn_clicked();

private:
    Ui::treshfilt *ui;
    QString path;
    QString pathToImages = QDir::currentPath() + "/resources/";
    int width, height;
    const double maxVal = 255.0;
    int val;
    FiltersWindow filt;
    QErrorMessage* errMsg;
};

#endif // TRESHFILT_H