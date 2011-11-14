#include "tuxlolgyclock.h"
#include "ui_tuxlolgyclock.h"
#include <QTimer>

TuxlolgyClock::TuxlolgyClock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TuxlolgyClock)
{

    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(displayTime()));
    timer->start(1000);
    displayTime();
}

TuxlolgyClock::~TuxlolgyClock()
{
    delete ui;
}

void TuxlolgyClock::on_pushButton_clicked()
{
    this->destroy();
}

void TuxlolgyClock::displayTime(){
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if((time.second() % 2) == 0){
        text[2] = ' ';
    }
    ui->lcdNumber->display(text);
}
