#ifndef MEDFILT_H
#define MEDFILT_H

#include <QDialog>
#include <QFileDialog>
#include <QErrorMessage>

#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include <boost/algorithm/string/predicate.hpp>

#include "../../../src/FiltOption/filterswindow.h"

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
    FiltersWindow filt;
    cv::Mat dst;
    QErrorMessage* errMsg;
};

#endif // MEDFILT_H
