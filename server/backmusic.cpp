#include "backmusic.h"
#include<QDebug>

backmusic::backmusic(QString path)
{
    player = new QMediaPlayer;
    playlist=new QMediaPlaylist;
    qDebug()<<path;
    playlist->addMedia(QUrl::fromLocalFile(path));
    player->setPlaylist(playlist);
    player->setVolume(50);
}
backmusic::backmusic(){

}

backmusic::~backmusic()
{
   delete player;
    delete playlist;
}

void backmusic::start(){
    qDebug()<<"music is playing";
    player->play();
}

void backmusic::repaly(){
    player->stop();
    player->play();
}
