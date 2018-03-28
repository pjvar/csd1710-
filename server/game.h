#ifndef GAME_H
#define GAME_H
#include <qstring.h>
class game
{
public:
    //游戏状态
    static const int READY=0;
    static const int PLAYING=1;
    static const int PAUSE=2;
    static const int WIN=3;
    static const int LOSE=4;
    //游戏难度
    static const int EASY=1;
    static const int MIDDLE=2;
    static const int HARD=3;

    static const int MAX_X=20;
    static const int MAX_Y=20;
    game();
    ~game();
    int getsizeX();
    int getsizeY();
    int getsize();
    int getscore();
    int getprompt();
    int getrrang();//获取重排剩余次数
    void set_status_ready();
    bool startgame();
    int *getmap();
    int *getmymap();
    bool fresh();//重排
    void set_gamechoice1();
    void set_gamechoice2();
    bool link(int startX,int startY,int endX,int endY);
    bool remind(int &startX,int &startY,int &endX,int &endY);
    bool playing ();
    bool win();
private:
    int status;
    int difficult;
    int score;
    int prompt;
    int rrange;
    int gamechoice;
    int sizeX,sizeY;
    int map[MAX_X*MAX_Y];
    int myMap[MAX_X][MAX_Y];
    int dir[2][4];
    bool used[MAX_X][MAX_Y];
    bool canlink(int StartX,int StartY,int endX,int endY,int step,int di);
};

#endif // GAME_H
