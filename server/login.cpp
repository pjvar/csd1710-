#include "login.h"
#include "ui_login.h"
#include<QPushButton>
#include<QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->usernameEdit->setText("tarena");
    ui->passwordEdit->setText("123456");
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
    ui->ServerEdit->setText("176.201.120.20");
    ui->portEdit->setText("8080");
    ui->buttonbox->button(QDialogButtonBox::Ok)->setText("登录");
    ui->buttonbox->button(QDialogButtonBox::Cancel)->setText("取消");
}

Login::~Login()
{
    delete ui;
}
const QString &Login::getusername(void){
    return Login::m_username;
}

const QString &Login::getpassword(void){
     return Login::m_password;
}
const QString &Login::getip(void){
    return Login::m_ip;
}

const QString &Login::getport(void){
    return Login::m_port;
}

void Login::on_buttonbox_accepted()
{
 m_username=ui->usernameEdit->text();
 m_password=ui->passwordEdit->text();
 m_ip=ui->ServerEdit->text();
 m_port=ui->portEdit->text();
 accept();
}

void Login::on_buttonbox_rejected()
{
    QMessageBox msg(QMessageBox::Warning,"提示","确定要退出吗？",QMessageBox::Yes|QMessageBox::No,this);
    if(msg.exec()==QMessageBox::Yes)
    reject();
}
