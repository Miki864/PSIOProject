#ifndef CHARACTER_H
#define CHARACTER_H

#include <Entity.h>


class Character : public Entity
{
    public:
        Character(std::string _class,std::string _name){id=_class;name=_name;};
        ~Character();
        void action(){};
    protected:
        std::string name;
    private:
};

#endif // CHARACTER_H

