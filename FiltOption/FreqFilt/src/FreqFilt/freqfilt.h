#ifndef FREQFILT_H
#define FREQFILT_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class freqfilt;
}

class freqfilt : public QDialog
{
    Q_OBJECT

public:
    explicit freqfilt(QWidget *parent = nullptr);
    ~freqfilt();

private slots :
    void on_retBtn_clicked();
    void on_foldBtn_clicked();

private:
    Ui::freqfilt *ui;
};

#endif // FREQFILT_H
