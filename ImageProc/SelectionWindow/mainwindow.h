#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../FiltOption/filterswindow.h"
#include "../HistOption/histogram.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_filtBtn_clicked();

    void on_histBtn_clicked();

private:
    Ui::MainWindow *ui;
    FiltersWindow *filt;
    histogram *hist;
};

#endif // MAINWINDOW_H