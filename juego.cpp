#include "juego.h"
#include "ui_juego.h"
#include <QTimer>
#include <QDateTime>

juego::juego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::juego)
{
    ui->setupUi(this);
    QTimer *Tempo=new QTimer(this);
    connect(Tempo,SIGNAL(timeout()),this,SLOT(Time()));
    Tempo->start();
}

void juego::Time(){
    QTime Tiempo=QTime::currentTime();
    QString Time_text=Tiempo.toString("ss");
    if ((Tiempo.second()%7)==1){
        ui->label_3->setText("Green");
    }
    else if ((Tiempo.second()%7)==2){
        ui->label_3->setText("Blue");
    }
    else if ((Tiempo.second()%7)==3){
        ui->label_3->setText("Yellow");
    }
    else if ((Tiempo.second()%7)==4){
        ui->label_3->setText("Red");
    }
    else if ((Tiempo.second()%7)==5){
        ui->label_3->setText("Blue");
    }
    else if ((Tiempo.second()%7)==6){
        ui->label_3->setText("Green");
    }
    else{
        ui->label_3->setText("Red");
    }
    ui->label_2->setText(Time_text);
}

juego::~juego()
{
    delete ui;
}

void juego::on_pushButton_3_clicked()
{
    if(ui->pushButton_3->text()==ui->label_3->text()){
        ui->label_4->setText("1");
    }
}

void juego::on_pushButton_4_clicked()
{
    if(ui->pushButton_3->text()==ui->label_3->text()){
        ui->label_4->setText("1");
    }
}

void juego::on_pushButton_6_clicked()
{
    if(ui->pushButton_3->text()==ui->label_3->text()){
        ui->label_4->setText("1");
    }
}

void juego::on_pushButton_5_clicked()
{
    if(ui->pushButton_3->text()==ui->label_3->text()){
        ui->label_4->setText("1");
    }
}
