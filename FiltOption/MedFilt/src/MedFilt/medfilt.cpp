#include "medfilt.h"
#include "ui_medfilt.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"

medfilt::medfilt(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::medfilt)
{
    ui->setupUi(this);
}

medfilt::~medfilt() { delete ui; }

void medfilt::on_retBtn_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

QString medfilt::on_foldBtn_clicked()
{
    path = QFileDialog::getOpenFileName(this,
                                        "Open Image File",
                                        pathToImages + "Images/**",
                                        "Images (*.png *.jpg *.jpeg)"
                                        );
    QPixmap map(path);
    width = ui->foldImageLbl->width();
    height = ui->foldImageLbl->height();
    ui->foldImageLbl->setPixmap(map.scaled(width, height, Qt::KeepAspectRatio));

    return path;
}

void medfilt::on_transBtn_clicked()
{
    cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);
    cv::Mat dst;

    cv::medianBlur(img, dst, ui->spinBox->value());

    cv::imshow("med blur", dst);
    cv::waitKey();
    cv::destroyAllWindows();
}