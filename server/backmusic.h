#ifndef BACKMUSIC_H
#define BACKMUSIC_H

#include<QMediaPlayer>
#include<QMediaPlaylist>
class backmusic
{
public:
    backmusic(QString path);
    backmusic();
    ~backmusic();
    void start();
    void repaly();
 private:
     QMediaPlayer* player;
     QMediaPlaylist* playlist;
};

#endif // BACKMUSIC_H
