#ifndef LOBBYDIALOG_H
#define LOBBYDIALOG_H

#include <QDialog>

namespace Ui {
class LobbyDialog;
}

class LobbyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LobbyDialog(QWidget *parent = nullptr);
    ~LobbyDialog();

private:
    Ui::LobbyDialog *ui;
};

#endif // LOBBYDIALOG_H
