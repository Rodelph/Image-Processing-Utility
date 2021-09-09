#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_filtBtn_clicked()
{
    filt = new FiltersWindow(this);
    filt->show();
    this->hide();
}

void MainWindow::on_histBtn_clicked()
{
    hist = new histogram(this);
    hist->show();
    this->hide();
}

void MainWindow::on_actionDetails_triggered()
{
    QMessageBox::information(this,
                             "More details",
                             this->_details
                             );
}