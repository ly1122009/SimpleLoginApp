#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include "lobbydialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_btn_login_clicked();

private:
    Ui::Dialog *ui;
    LobbyDialog *_lobbyDialog;
};
#endif // DIALOG_H
