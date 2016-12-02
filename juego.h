#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>

namespace Ui {
class juego;
}

class juego : public QMainWindow
{
    Q_OBJECT

public:
    explicit juego(QWidget *parent = 0);
    ~juego();

private slots:
    void Time();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::juego *ui;
};

#endif // JUEGO_H
