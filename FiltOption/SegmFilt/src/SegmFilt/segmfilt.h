#ifndef SEGMFILT_H
#define SEGMFILT_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class segmfilt;
}

class segmfilt : public QDialog
{
    Q_OBJECT

public:
    explicit segmfilt(QWidget *parent = nullptr);
    ~segmfilt();

private slots:
    void on_retBtn_clicked();
    void on_foldBtn_clicked();

private:
    Ui::segmfilt *ui;
};

#endif // SEGMFILT_H
