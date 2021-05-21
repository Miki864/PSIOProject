#ifndef ROOM_H
#define ROOM_H
#include <Enemy.h>

class Room
{
    public:
        Room(int i,int k){id=i;Enemy_kind=k;};
        ~Room();

    protected:
        int Enemy_kind;
        int id;
        int roomleft=0,roomright=0,roomup=0,roomdown=0;
        Enemy* inhabitant=new Enemy(Enemy_kind);
    private:
};

#endif // ROOM_H
