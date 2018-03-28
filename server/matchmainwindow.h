#ifndef MATCHMAINWINDOW_H
#define MATCHMAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include <QPushButton>
#include<QTime>
#include"backmusic.h"
#include<QTcpSocket>
#include<QHostAddress>
#include<QMessageBox>
#include"sqlit.h"
#include"musicpliaythread.h"
#include<QTimer>

namespace Ui {
class MatchMainWindow;
}

class MatchMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MatchMainWindow(QWidget *parent = 0);
    ~MatchMainWindow();
    void startgame();
    void login_t(void);//处理认证登录的函数
    void deleteimg(void);
    void rrange(void);//重新排列
 private:
    void timerEvent(QTimerEvent * );
private slots:
    void on_action_triggered();
    void on_image_click();
    void on_tipButton_clicked(bool checked);
    void on_prbtime_valueChanged(int value);
    void onConneted();
    void onDisconnected();
    void onError(QAbstractSocket::SocketError);
    void onReadyRead();
    //void on_textBrowser_textChanged();

    void on_resetButton_clicked();

    void on_exitaction_triggered();
    void on_sendEdit_textChanged(const QString &arg1);

    void on_sendButton_clicked();

    void on_restartaction_triggered();

    void on_gameaction2_triggered();

private:
    Ui::MatchMainWindow *ui;
    game newgame;
    sqlit sql;
    QPushButton *image[50*50];
    int startX,startY;
    int size;
    bool flag;
    int timeid;
    int  timereward;
    int gamechoice;
    QPushButton *front;
    QTcpSocket tcpSocket;
    QHostAddress serverIP;
    quint16 serverPort;
    QString m_ip;
    QString m_port;
    QString username;
    QString password;
    musicpliayThread mpt;
     backmusic *music;
};

#endif // MATCHMAINWINDOW_H
