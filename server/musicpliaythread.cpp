#include "musicpliaythread.h"
#include<QCoreApplication>

musicpliayThread::musicpliayThread()
{
    QString msg(QCoreApplication::applicationDirPath());
    msg=msg+"/Sounds/backgrand.wav";
    bk = new backmusic(msg);
}


musicpliayThread::~musicpliayThread()
{
    delete bk;
}

void musicpliayThread::run(void){
    bk->start();
    while(1){
     sleep(100);
    bk->repaly();
    }
}
