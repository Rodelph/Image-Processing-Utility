#ifndef TRESHFILT_H
#define TRESHFILT_H

#include <QDialog>
#include <QFileDialog>

namespace Ui { class treshfilt; }

class treshfilt : public QDialog
{
    Q_OBJECT

public:
    explicit treshfilt(QWidget *parent = nullptr);
    ~treshfilt();

private slots :
    void on_retBtn_clicked();
    void on_foldBtn_clicked();

private:
    Ui::treshfilt *ui;
};

#endif // TRESHFILT_H
