#ifndef SQLIT_H
#define SQLIT_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlError>
#include<QDebug>
class sqlit   
{
public:
    sqlit();
    ~sqlit();
    void createDB(void);
    void createTable(void);
    //查询和遍历结果
    void queryTable(void);
    void insert_t(QString name ,int score);
    void delete_t();
    void update_t(QString name,int score);
    void sort_t();
    QSqlQueryModel *getmodle();
private:
    QSqlDatabase db;
    QSqlQueryModel model;
};

#endif // SQLIT_H
