#ifndef TUXLOLGYCLOCK_H
#define TUXLOLGYCLOCK_H

#include <QWidget>
#include <QString>
#include <QDateTime>

namespace Ui {
    class TuxlolgyClock;
}

class TuxlolgyClock : public QWidget
{
    Q_OBJECT

public:
    explicit TuxlolgyClock(QWidget *parent = 0);
    ~TuxlolgyClock();

public slots:
        void displayTime();

private slots:
        void on_pushButton_clicked();

private:
    Ui::TuxlolgyClock *ui;
};



#endif // TUXLOLGYCLOCK_H
