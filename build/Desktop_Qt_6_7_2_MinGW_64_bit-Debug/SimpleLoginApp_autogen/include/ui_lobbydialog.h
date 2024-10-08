/********************************************************************************
** Form generated from reading UI file 'lobbydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBYDIALOG_H
#define UI_LOBBYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LobbyDialog
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QDialog *LobbyDialog)
    {
        if (LobbyDialog->objectName().isEmpty())
            LobbyDialog->setObjectName("LobbyDialog");
        LobbyDialog->resize(719, 593);
        groupBox = new QGroupBox(LobbyDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(220, 240, 150, 71));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        retranslateUi(LobbyDialog);

        QMetaObject::connectSlotsByName(LobbyDialog);
    } // setupUi

    void retranslateUi(QDialog *LobbyDialog)
    {
        LobbyDialog->setWindowTitle(QCoreApplication::translate("LobbyDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LobbyDialog", "Lobby", nullptr));
        label->setText(QCoreApplication::translate("LobbyDialog", "Welcome to lobby", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LobbyDialog: public Ui_LobbyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBYDIALOG_H
