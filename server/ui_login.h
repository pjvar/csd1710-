/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *ServerEdit;
    QLabel *label_3;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *usernameEdit;
    QLabel *label_5;
    QLineEdit *passwordEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonbox;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(598, 183);
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        ServerEdit = new QLineEdit(Login);
        ServerEdit->setObjectName(QStringLiteral("ServerEdit"));

        horizontalLayout->addWidget(ServerEdit);

        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        portEdit = new QLineEdit(Login);
        portEdit->setObjectName(QStringLiteral("portEdit"));

        horizontalLayout->addWidget(portEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(Login);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        usernameEdit = new QLineEdit(Login);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));

        horizontalLayout_2->addWidget(usernameEdit);

        label_5 = new QLabel(Login);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        passwordEdit = new QLineEdit(Login);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));

        horizontalLayout_2->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        buttonbox = new QDialogButtonBox(Login);
        buttonbox->setObjectName(QStringLiteral("buttonbox"));
        buttonbox->setLayoutDirection(Qt::RightToLeft);
        buttonbox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonbox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0));
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\347\231\273\345\275\225", 0));
        label_2->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\357\274\232", 0));
        label_3->setText(QApplication::translate("Login", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("Login", "\345\257\206   \347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
