#include "medfilt.h"
#include "ui_medfilt.h"

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
    if( boost::ends_with(path.toStdString(), ".jpg") ||
        boost::ends_with(path.toStdString(), ".png") ||
        boost::ends_with(path.toStdString(), ".jpeg") )
    {
        cv::Mat img = cv::imread(path.toStdString(), cv::IMREAD_GRAYSCALE);

        cv::medianBlur(img, dst, ui->spinBox->value());

        cv::imshow("med blur", dst);
        cv::waitKey();
        cv::destroyAllWindows();
    } 
    else
    {
        errMsg = new QErrorMessage(this);
        errMsg->showMessage("You did not chose an image !!");
    }
}