#include "mainwindow.h"
#include "../../../build-ImageProc-Desktop-Release/SelectionWindow/SelectionWindow_autogen/include/ui_mainwindow.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"
#include "../../../HistOption/src/HistOption/histogram.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
                                         ,ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Qt::WA_DeleteOnClose;
}

MainWindow::~MainWindow() { delete ui;}

void MainWindow::on_filtBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    FiltersWindow filt;
    filt.setModal(true);
    filt.exec();
}

void MainWindow::on_histBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    histogram hist;
    hist.setModal(true);
    hist.exec();
}

void MainWindow::on_actionDetails_triggered()
{
    QMessageBox::information(this,
                             "More details",
                             this->_details
                             );
}