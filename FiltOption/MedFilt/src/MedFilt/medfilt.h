#ifndef MEDFILT_H
#define MEDFILT_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class medfilt;
}

class medfilt : public QDialog
{
    Q_OBJECT

public:
    explicit medfilt(QWidget *parent = nullptr);
    ~medfilt();

private slots :
    void on_retBtn_clicked();
    void on_foldBtn_clicked();

private:
    Ui::medfilt *ui;
};

#endif // MEDFILT_H
