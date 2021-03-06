#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>

class Entity
{
    public:
        Entity(){}
        virtual ~Entity(){}
        void st_plus(int bonus=1){st+=bonus;}
        void ag_plus(int bonus=1){ag+=bonus;}
        void iq_plus(int bonus=1){iq+=bonus;}
        void max_hp_plus(int bonus=1){max_hp+=bonus;}
        void healing_skill_plus(int bonus=1){healing_skill+=bonus;}
        void damage_given_plus(int bonus=1){damage_given+=bonus;}
        void protection_plus(int bonus=1){protection+=bonus;}
        void hurt(int dmg){hp=hp-dmg;}
        void heal(int healing){hp=hp+healing;if(hp>max_hp){hp=max_hp;}}
        int health(){return hp;}
        virtual void action()=0;
    protected:
        int st=4, ag=4, iq=4;
        std::string id;
        int hp=10,max_hp=10,healing_skill=1,damage_given=3,protection=0;
    private:
};

#endif
