/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox_SignIn;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QPushButton *btn_login;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 600);
        groupBox_SignIn = new QGroupBox(Dialog);
        groupBox_SignIn->setObjectName("groupBox_SignIn");
        groupBox_SignIn->setGeometry(QRect(250, 210, 232, 158));
        verticalLayout_3 = new QVBoxLayout(groupBox_SignIn);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_Username = new QLabel(groupBox_SignIn);
        label_Username->setObjectName("label_Username");

        horizontalLayout->addWidget(label_Username);

        lineEdit_Username = new QLineEdit(groupBox_SignIn);
        lineEdit_Username->setObjectName("lineEdit_Username");

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_Password = new QLabel(groupBox_SignIn);
        label_Password->setObjectName("label_Password");

        horizontalLayout_2->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(groupBox_SignIn);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        btn_login = new QPushButton(groupBox_SignIn);
        btn_login->setObjectName("btn_login");

        verticalLayout_2->addWidget(btn_login);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox_SignIn->setTitle(QCoreApplication::translate("Dialog", "Sign In", nullptr));
        label_Username->setText(QCoreApplication::translate("Dialog", "Username", nullptr));
        label_Password->setText(QCoreApplication::translate("Dialog", "Password", nullptr));
        btn_login->setText(QCoreApplication::translate("Dialog", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
