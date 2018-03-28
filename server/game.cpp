#include "game.h"
#include <time.h>
#include <cstdio>
#include <QDebug>

game::game()
{
 qDebug()<<",";
game::status=game::READY;
game::gamechoice=1;
game::sizeX=10;
game::sizeY=10;
memset(map,0,sizeof(map));
memset(myMap,0,sizeof(myMap));
memset(used,0,sizeof(used));
dir[0][0]=1;dir[1][0]=0;
dir[0][1]=-1;dir[1][1]=0;
dir[0][2]=0;dir[1][2]=1;
dir[0][3]=0;dir[1][3]=-1;
}

game::~game()
{
}
bool game::startgame(){
    game::score=0;
    game::prompt=5;
    game::rrange=3;
   /*if(game::gamechoice==1){
    game::sizeX=12;
    game::sizeY=12;
    }else if(game::gamechoice==2){
     game::sizeX=10;
     game::sizeY=10;
    }*/
    int number=0;
    if(game::gamechoice==1)number=25;
     else if(game::gamechoice==2)number=18;
    qDebug()<<"m";
    if(game::status==game::PLAYING)return false;
    srand(time(NULL));
    game::status=game::PLAYING;
    int i=0,j=0;
    int save[50*50];
    for(i=0;i<game::sizeX*game::sizeY;i+=2){
        save[i]=j%number+1;
        save[i+1]=j%number+1;
        qDebug()<<"c";
        ++j;
    }
    for(i=0;i<game::sizeX*game::sizeY;i++){
        int x=rand()%game::sizeX*game::sizeY;
        int m=save[i];
        save[i]=save[x];
        save[x]=m;
    }
    for(i=0;i<game::sizeX*game::sizeY;i++){
      game::map[i]=save[i];
    }
    for(i=1;i<=game::sizeX;i++){
        for(j=1;j<=game::sizeY;j++){
            game::myMap[i][j]=map[(i-1)*game::sizeY+j-1];
        }
    }
    for(i=0;i<=game::sizeX+1;i++){
        for(j=0;j<=game::sizeY+1;j++){
            qDebug()<<myMap[i][j];
        }
        qDebug()<<"\n";
    }
    return true;
}
int *game::getmap(){
    qDebug()<<"e";
    return map;
}
int game::getsize(){
    return game::sizeX*game::sizeY;
}
int game::getsizeX(){
    return game::sizeX;
}
int game::getsizeY(){
    return game::sizeY;
}
 bool game::playing (){
      return game::status == game::PLAYING ? true : false;
 }
int game::getscore(){
    return game::score;
}
int *game::getmymap(){
    return game::myMap[0];
}
int game::getprompt(){
    return game::prompt;
}
int game::getrrang(){
    return game::rrange;
}
 void game::set_status_ready(){
     game::status=game::READY;
 }
void game::set_gamechoice2(){
    game::gamechoice=2;
}
void game::set_gamechoice1(){
    game::gamechoice=1;
}
bool game::canlink(int startX,int startY,int endX,int endY,int step,int di){
     int tmp;
     for(int i=0;i<4;i++){
         int x=startX+dir[0][i];
         int y=startY+dir[1][i];
         if(x<0||x>sizeX+1||y<0||y>sizeY+1)continue;
         tmp=step;
         if(i!=di)tmp=step+1;
         if(tmp>=3)continue;
         if(x==endX&&y==endY)return true;
         else{
             if(game::myMap[x][y]==0&&used[x][y]!=true){
                 used[x][y]=true;
                 if(canlink(x,y,endX,endY,tmp,i)){
                     return true;
                 }
                 used[x][y]=false;
             }else{
                     continue;
                 }
             }
     }
     return false;
}
bool game::link(int startX,int startY,int endX,int endY){
     memset(used,false,sizeof(used));
     used[startX][startY]=true;
     qDebug()<<game::myMap[startX][startY]<<game::myMap[endX][endY];
     if(game::myMap[startX][startY]!=game::myMap[endX][endY])return false;
     if(canlink(startX,startY,endX,endY,-1,-1)){
       game::myMap[startX][startY]=0;
       game::myMap[endX][endY]=0;
       game::score+=10;
       return true;
     }else
     return false;
 }
bool game::remind(int &startX,int &startY,int &endX,int &endY){
    if(game::prompt>0){
    for(startX=1;startX<=game::sizeX;startX++){
        for(startY=1;startY<=game::sizeY;startY++){
            for(endX=1;endX<=game::sizeX;endX++){
                for(endY=1;endY<=game::sizeY;endY++){
                    memset(used,false,sizeof(used));
                    used[startX][startY]=true;
                    if(game::myMap[startX][startY]==0||game::myMap[endX][endY]==0||(startX==endX&&startY==endY)
                        ||game::myMap[startX][startY]!=game::myMap[endX][endY]){
                           continue;
                    }
                    if(canlink(startX,startY,endX,endY,-1,-1)){
                        game::prompt--;
                        return true;
                    }
                }
            }
        }
    }
    }
    return false;
}
bool game::win(){
    for(int x=1;x<=game::sizeX;x++){
        for(int y=1;y<=game::sizeY;y++){
            if(game::myMap[x][y]!=0){
                return false;
            }
        }
    }
    game::status=WIN;
    return true;
}
bool game::fresh(){
    if(game::status!=PLAYING)return false;
    if(rrange--){
    int save[game::MAX_X*game::MAX_Y];
    int k=0;
    for(int i=1;i<=game::sizeX;i++){
        for(int j=1;j<=game::sizeY;j++){
            if(game::myMap[i][j]!=0){
             save[k++]=myMap[i][j];
            }
        }
    }
    for(int i=0;i<k;i++){
        int j=rand()%k;
        int tmp=save[i];
        save[i]=save[j];
        save[j]=tmp;
    }
    for(int i=1;i<=game::sizeX;i++){
        for(int j=1;j<=game::sizeY;j++){
            if(game::myMap[i][j]!=0){
            myMap[i][j]=save[--k];
            }
        }
    }
    return true;
    }
    return false;
}
