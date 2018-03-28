#include "sqlit.h"
sqlit::sqlit()
{
    createDB();
    createTable();
    queryTable();
}

sqlit::~sqlit()
{

}

//创建数据库文件并建立和QT程序的连接
void sqlit::createDB(void)
{    //添加sqlite数据库驱动
    db=QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库文件名，如果文件不存在会自动创建
    db.setDatabaseName("menu.db");
    if(db.open()==false)qDebug()<<db.lastError().text();
}

void sqlit::createTable(void)
{
    QString str=QString("CREATE OR REPLACE TABLE user(name TEXT PRIMARY KEY NOT NULL,score REAL NOT NULL)");
    QSqlQuery query;
    query.exec(str);
}
void sqlit::queryTable(void)
{
  QString str=QString("SELECT *FROM user ORDER BY score DESC");
  //查询语句，保存结果到model
   model.setQuery(str);
}
void sqlit::insert_t(QString name,int score){
    //创建插入操作的SQL语句
    QString str=QString("REPLACE INTO user VALUES('%1',%2)").arg(name).arg(score);
    QSqlQuery query;
    query.exec(str);
    //再次查询和显示
    queryTable();
}

void sqlit::delete_t(){
    QString str=QString("DELETE FROM user");
    QSqlQuery query;
    query.exec(str);
}

void sqlit::update_t(QString name,int score){
    QString str=QString("UPDATE student SET score=%1 WHERE name=%2").arg(score).arg(name);
    QSqlQuery query;
    query.exec(str);
    queryTable();
}

void sqlit::sort_t(){
    QString str=QString("SELECT  FROM student ORDER BY score DESC");
    model.setQuery(str);
}
QSqlQueryModel *sqlit::getmodle(){
    return &model;
}
