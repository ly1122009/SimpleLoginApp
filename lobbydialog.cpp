#include "lobbydialog.h"
#include "ui_lobbydialog.h"

LobbyDialog::LobbyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LobbyDialog)
{
    ui->setupUi(this);
}

LobbyDialog::~LobbyDialog()
{
    delete ui;
}
