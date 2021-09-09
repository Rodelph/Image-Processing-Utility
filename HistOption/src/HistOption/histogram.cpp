#include "histogram.h"
#include "../../../build-ImageProc-Desktop-Release/HistOption/HistOption_autogen/include/ui_histogram.h"
#include "../../../../FiltOption/src/FiltOption/filterswindow.h"

histogram::histogram(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::histogram)
{
    ui->setupUi(this);
}

histogram::~histogram() { delete ui; QApplication::exit();}

void histogram::on_filtBtn_clicked()
{
    this->hide();
    FiltersWindow main;
    main.exec();
}
