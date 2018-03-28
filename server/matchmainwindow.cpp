#include "matchmainwindow.h"
#include "ui_matchmainwindow.h"
#include <QIcon>
#include<qstring.h>
#include<qpainter.h>
#include<cstdio>
#include<QPixmap>
#include<QDebug>
#include<QPalette>
#include"login.h"
#include<QMessageBox>

MatchMainWindow::MatchMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MatchMainWindow)
{
    login_t();
}

MatchMainWindow::~MatchMainWindow()
{
    delete ui;
    MatchMainWindow::deleteimg();
    delete music;
}
void MatchMainWindow::login_t(void){
    Login log(this);
      if(log.exec()==QDialog::Accepted){
          username=log.getusername();
          password=log.getpassword();
          m_ip=log.getip();
          m_port=log.getport();
          if((username=="tarena"&&password=="123456")||(username=="log"&&password=="123456")||(username=="in"&&password=="123456")||(username=="na"&&password=="123456")){
              ui->setupUi(this);
              this->setObjectName("pw");// 设置对象句
              this->setStyleSheet("#pw {border-image: url(:/1234567.jpg);}");
              ui->listWidget->setStyleSheet("background-color:transparent");
              ui->listWidget->setFrameShape(QListWidget::NoFrame);
              ui->tableView->setStyleSheet("background-color:transparent");
              ui->tableView->setFrameShape(QTableView::NoFrame);
              //ui->prbtime->setStyleSheet("background-color:transparent");
              startX=60;
              startY=110;
              size=70;
              front=NULL;
              timereward=5;
              gamechoice=1;
              ui->restartaction->setEnabled(false);
              ui->prbtime->setValue(0);
               QString msg(QCoreApplication::applicationDirPath());
               msg=msg+"/Sounds/pair.wav";
               music = new backmusic(msg);

               mpt.start();
              qDebug()<<m_ip;
                 if(serverIP.setAddress(m_ip)==false){
                     QMessageBox::critical(this,"ERROR","WRONG IP!!!");
                     return;
                 }
                 serverPort=m_port.toShort();
                 qDebug()<<m_port;
                 if(serverPort<1024||serverPort>48000){
                     QMessageBox::critical(this,"ERROR","WRONG PORT!!!");
                     return;
                 }
              connect(ui->gameaction,SIGNAL(triggered()),this,SLOT(on_action_triggered()));
              connect(&tcpSocket,SIGNAL(connected()),this,SLOT(onConneted()));
              connect(&tcpSocket,SIGNAL(disconnected()),this,SLOT(onDisconnected()));
              connect(&tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError(QAbstractSocket::SocketError)));
              connect(&tcpSocket,SIGNAL(readyRead()),this,SLOT(onReadyRead()));
              tcpSocket.connectToHost(serverIP,serverPort);
          }
      }
}

void MatchMainWindow::on_action_triggered(){
  QString msg=username+":ks";
  tcpSocket.write(msg.toLocal8Bit());
  gamechoice=1;
  newgame.set_gamechoice1();
   MatchMainWindow::startgame();
}

void MatchMainWindow::startgame(){
   MatchMainWindow::deleteimg();
    newgame.set_status_ready();
    newgame.startgame();
    sql.delete_t();
    flag=false;
    ui->labelscore->setText(QString::number(newgame.getscore()));
    ui->timelabel->setText(QString::number(100*300/1000));
    ui->labeltip->setText(QString::number(newgame.getprompt()));
    ui->labelreset->setText(QString::number(newgame.getrrang()));
    int *map=newgame.getmap();
    int x=startX,y=startY;
    for(int i=0;i<newgame.getsize();i++){
        MatchMainWindow::image[i]=new QPushButton(this);
        qDebug()<<"a";
        image[i]->setGeometry(x+size*(i%newgame.getsizeX()),y+size*(i/newgame.getsizeX()),size,size);
        qDebug()<<map[i];
        QString msg;
        if(gamechoice==1){
        msg="./image1/";
        }else if(gamechoice==2){
          msg="./image3/";
        }

        msg=msg+QString::number(map[i])+QString(".png");
        qDebug()<<msg;
        QPixmap pixmap(msg);
        QIcon icon(pixmap);
        image[i]->setIcon(icon);
        image[i]->setIconSize(QSize(size-6,size-6));
        image[i]->setAutoFillBackground(true);
        image[i]->setPalette(QPalette(Qt::gray));
         image[i]->show();
             image[i]->setEnabled(false);
             ui->gameaction->setEnabled(false);
         ui->tipButton->setEnabled(true);
         ui->resetButton->setEnabled(true);
        connect(image[i],SIGNAL(clicked()),this,SLOT(on_image_click()));

    }
}
void MatchMainWindow::on_image_click(){
     QPushButton *next=(QPushButton *)sender();
     if(MatchMainWindow::flag){
         if(front==next){
             return;
         }
         int frontX=(front->geometry().x()-startX)/size;
         int frontY=(front->geometry().y()-startY)/size;
         int nextX=(next->geometry().x()-startX)/size;
         int nextY=(next->geometry().y()-startY)/size;
         if(newgame.link(frontY+1,frontX+1,nextY+1,nextX+1)){
             music->repaly();
             delete(MatchMainWindow::front);
             delete(next);
             MatchMainWindow::flag=false;
             MatchMainWindow::front=NULL;
             next=NULL;
             ui->prbtime->setValue((ui->prbtime->maximum() - ui->prbtime->value()) > timereward?
                         ui->prbtime->value() + timereward: ui->prbtime->maximum());
             ui->labelscore->setText(QString::number(newgame.getscore()));
             QString msg=username+":获得了10分，总分:"+QString::number(newgame.getscore());
             tcpSocket.write(msg.toLocal8Bit());
         }else{
             front->setPalette(QPalette(Qt::gray));
             front=next;
             front->setPalette(QPalette(Qt::red));
         }
     }else{
         MatchMainWindow::flag=true;
         front=next;
         front->setPalette(QPalette(Qt::red));
     }

     if(newgame.win()){
         QMessageBox::information(this, "INFORMATION", QString(QObject::tr("YOU WIN THIS LEVEL WITH SCORE:")) +
                                          QString (QString::number(newgame.getscore())));
         QString msg1=username+":结束本轮";
         tcpSocket.write(msg1.toLocal8Bit());
          ui->gameaction->setEnabled(true);
         ui->tipButton->setEnabled(false);
         ui->resetButton->setEnabled(false);
         ui->restartaction->setEnabled(false);

     }
}

void MatchMainWindow::on_tipButton_clicked(bool checked)
{
    if(!newgame.playing())return;
    int sx,sy,ex,ey;
    if(newgame.remind(sx,sy,ex,ey)){
        qDebug()<<sx<<','<<sy<<','<<ex<<','<<ey;
        image[(sx-1)*newgame.getsizeY()+sy-1]->setPalette(QPalette(Qt::darkRed));
        image[(ex-1)*newgame.getsizeY()+ey-1]->setPalette(QPalette(Qt::darkRed));
        ui->labeltip->setText(QString::number(newgame.getprompt()));
    }
    if(!newgame.getprompt()){
        QMessageBox::information(this,"information",QString(QObject::tr("你的提示次数已经用完！")));
    }
}
void MatchMainWindow::timerEvent(QTimerEvent *){
    if(ui->prbtime->value()>0){
    ui->prbtime->setValue(ui->prbtime->value()-1);
    }
    ui->timelabel->setText(QString::number(ui->prbtime->value()*300/1000));
}

void MatchMainWindow::on_prbtime_valueChanged(int value)
{

    if(value==0){
          qDebug()<<"hello";\
        killTimer(timeid);
        MatchMainWindow::deleteimg();
        QMessageBox::information(this, "INFORMATION", QString(QObject::tr("YOU ARE LOSE WITH SCORE:")) +
                                         QString (QString::number(newgame.getscore())));
        QString msg=username+":结束本轮";
        tcpSocket.write(msg.toLocal8Bit());
         ui->gameaction->setEnabled(true);
            ui->tipButton->setEnabled(false);
            ui->resetButton->setEnabled(false);
           ui->restartaction->setEnabled(false);

    }

}
void MatchMainWindow::deleteimg(void){
     int * map=newgame.getmymap();
     for(int i=1;i<=newgame.getsizeX();i++){
         for (int j=1;j<=newgame.getsizeY();j++){
             if(*(map+i*newgame.MAX_Y+j)!=0){
                  delete (image[(i - 1) * newgame.getsizeY() + j - 1]);   
             }
             image[(i - 1) * newgame.getsizeY() + j - 1] = NULL;
         }
     }
}
void MatchMainWindow::rrange(void){
    newgame.fresh();
    int *map=newgame.getmymap();
    for(int i=1;i<=newgame.getsizeX();i++){
        for(int j=1;j<=newgame.getsizeY();j++){
            if(*(map+i*newgame.MAX_Y+j)!=0){
                QString msg;
                if(gamechoice==1)msg="./image1/";
                if(gamechoice==2)msg="./image3/";
                msg=msg+QString::number(*(map+i*newgame.MAX_Y+j))+QString(".png");
                QPixmap pixmap(msg);
                QIcon icon(pixmap);
                int k=(i-1)*newgame.getsizeY()+j-1;
                image[k]->setIcon(icon);
                image[k]->setIconSize(QSize(size-6,size-6));
                image[k]->setAutoFillBackground(true);
                image[k]->setPalette(QPalette(Qt::gray));
                image[k]->show();
        }
    }
}
}
void MatchMainWindow::onConneted()
{
   QString msg=username+":进入游戏..";
   tcpSocket.write(msg.toLocal8Bit());//toLOcal8Bit():QString-->QByetArray
}
void MatchMainWindow::onDisconnected(){
      QMessageBox::information(this,"information",QString(QObject::tr("离开游戏！")));
}

void MatchMainWindow::onError(QAbstractSocket::SocketError){
      QMessageBox::critical(this,"ERROR",tcpSocket.errorString());
}

void MatchMainWindow::onReadyRead(){
    if(tcpSocket.bytesAvailable()){
        QByteArray readBuf;
        readBuf.resize(tcpSocket.bytesAvailable());
        tcpSocket.read(readBuf.data(),readBuf.size());
        QString tmp=readBuf;
        QStringList list=tmp.split(":");
        if(list.size()>=3&&list[2].toInt()>=10){
            qDebug()<<"score";
         int a=list[2].toInt();
        sql.insert_t(list[0],a);
        list.clear();
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
        ui->tableView->setModel(sql.getmodle());
        }else{
            if((list[list.size()-1]!="ks")&&(list[list.size()-1]!="999")){
            ui->listWidget->addItem(readBuf);
            ui->listWidget->scrollToBottom();
            }
            else if(list[list.size()-1]=="999"){
                ui->gameaction->setEnabled(true);
            }
            else
            {
                qDebug()<<"kaishi";
                for(int i=0;i<newgame.getsize();i++){
                    image[i]->setEnabled(true);
                }
                ui->restartaction->setEnabled(true);
                if(ui->prbtime->value()!=100){
                ui->prbtime->setValue(100);
                }
                timeid=startTimer(300);
            }
        }
    }
}

/*void MatchMainWindow::on_textBrowser_textChanged()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
}*/

void MatchMainWindow::on_resetButton_clicked()
{
    if(newgame.getrrang()>0){
        MatchMainWindow::rrange();
        ui->labelreset->setText(QString::number(newgame.getrrang()));

    }else{
        QMessageBox::information(this,"information",QString(QObject::tr("你的重排次数已经用完！")));
    }
}

void MatchMainWindow::on_exitaction_triggered()
{
    mpt.terminate();
    mpt.wait();
    if(ui->prbtime->value()!=0)ui->prbtime->setValue(0);
    tcpSocket.disconnectFromHost();
    exit(0);
}

void MatchMainWindow::on_sendEdit_textChanged(const QString &arg1)
{
    ui->sendButton->setEnabled(true);


}

void MatchMainWindow::on_sendButton_clicked()
{
     QString message=ui->sendEdit->text();
     message=username+":"+message;
    tcpSocket.write(message.toLocal8Bit());
    ui->sendEdit->clear();
    ui->sendButton->setEnabled(false);
}

void MatchMainWindow::on_restartaction_triggered()
{
    if(ui->prbtime->value()!=0)ui->prbtime->setValue(0);
    ui->timelabel->setText("");
}

void MatchMainWindow::on_gameaction2_triggered()
{
    QString msg=username+":ks";
    tcpSocket.write(msg.toLocal8Bit());
    gamechoice=2;
    newgame.set_gamechoice2();
     MatchMainWindow::startgame();
}
