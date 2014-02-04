#ifndef MYWALLET_H
#define MYWALLET_H

#include <QMainWindow>
#include "adddialog.h"

namespace Ui {
class MyWallet;
}

class MyWallet : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MyWallet* _ui;

public:
    explicit MyWallet(QWidget *parent = 0);
    ~MyWallet();

private slots:
    void on__action_add_triggered();

private:
    void CreateTableRow(QDate &date, int total, QString &description, bool isRest = true);
};

#endif // MYWALLET_H
