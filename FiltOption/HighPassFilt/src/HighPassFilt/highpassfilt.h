#ifndef HIGHPASSFILT_H
#define HIGHPASSFILT_H

#include <QDialog>
#include <QFileDialog>

namespace Ui { class highpassfilt; }

class highpassfilt : public QDialog
{
    Q_OBJECT

public:
    explicit highpassfilt(QWidget *parent = nullptr);
    ~highpassfilt();

private slots :
    void on_retBtn_clicked();
    void on_foldBtn_clicked();

private:
    Ui::highpassfilt *ui;
};

#endif // HIGHPASSFILT_H