#ifndef LOWPASSFILT_H
#define LOWPASSFILT_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class lowpassfilt;
}

class lowpassfilt : public QDialog
{
    Q_OBJECT

public:
    explicit lowpassfilt(QWidget *parent = nullptr);
    ~lowpassfilt();

private slots :
    void on_retBtn_clicked();
    void on_foldBtn_clicked();

private:
    Ui::lowpassfilt *ui;
};

#endif // LOWPASSFILT_H
