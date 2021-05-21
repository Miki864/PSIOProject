#ifndef CHARACTER_H
#define CHARACTER_H

#include <Entity.h>


class Character : public Entity
{
    public:
        Character(std::string _class){id=_class;};
        ~Character();
        void action(){};
    protected:

    private:
};

#endif // CHARACTER_H

