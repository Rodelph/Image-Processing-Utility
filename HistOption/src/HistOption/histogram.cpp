#include "histogram.h"
#include "../../../build-ImageProc-Desktop-Release/HistOption/HistOption_autogen/include/ui_histogram.h"
#include "../../../FiltOption/src/FiltOption/filterswindow.h"

histogram::histogram(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::histogram)
{
    ui->setupUi(this);
    Qt::WA_DeleteOnClose;
}

histogram::~histogram() { delete ui; }

void histogram::on_filtBtn_clicked()
{
    this->setAttribute(Qt::WA_QuitOnClose);
    this->close();
    FiltersWindow main;
    main.setModal(true);
    main.exec();
}

void histogram::on_foldBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(nullptr,
                                                "Open Image File",
                                                QDir::currentPath() + "/resources/Images/**",
                                                ("Image files (*.png *.jpg *.jpeg")
                                                );
}