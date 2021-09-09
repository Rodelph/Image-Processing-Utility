#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <QDialog>

namespace Ui {
class histogram;
}

class histogram : public QDialog
{
    Q_OBJECT

public:
    explicit histogram(QWidget *parent = nullptr);
    ~histogram();

private slots:
    void on_filtBtn_clicked();

private:
    Ui::histogram *ui;
};

#endif // HISTOGRAM_H