#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    const QString &getusername(void);
    const QString &getpassword(void);
    const QString &getip(void);
    const QString &getport(void);
private slots:
    void on_buttonbox_accepted();

    void on_buttonbox_rejected();

private:
    Ui::Login *ui;
    QString m_username;
    QString m_password;
    QString m_ip;
    QString m_port;

};

#endif // LOGIN_H
