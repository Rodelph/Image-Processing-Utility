#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../FiltOption/filterswindow.h"
#include "../HistOption/histogram.h"

#include <QMainWindow>
#include <QMessageBox>

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
    void on_actionDetails_triggered();

private:

    Ui::MainWindow *ui;
    FiltersWindow *filt;
    histogram *hist;

    const QString _details = tr(
        "This project will help you understand all the fondamentals about Image Processing.<br>"
        "You can choose between Histogram and Filter and you will be prompted to other choices"
        "for each choice !!"
    );
};

#endif // MAINWINDOW_H
