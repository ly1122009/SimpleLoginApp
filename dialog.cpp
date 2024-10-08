#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();
    bool condition = (username == "CongLy" && password == "congly");
    if (condition)
    {
        QMessageBox::information(this, "Login status", "Login successed");
        this->hide();
        _lobbyDialog = new LobbyDialog(this);
        _lobbyDialog->show();
    }
    else
    {
        QMessageBox::warning(this, "Login status", "Login failed, username or password is not correct");
    }
}

