#ifndef MUSICPLIAYTHREAD_H
#define MUSICPLIAYTHREAD_H
#include <QThread>
#include"backmusic.h"
class musicpliayThread : public QThread
{
public:
    musicpliayThread();
    ~musicpliayThread();
protected:
    void run(void);
private:
     backmusic *bk;
};

#endif // MUSICPLIAYTHREAD_H
