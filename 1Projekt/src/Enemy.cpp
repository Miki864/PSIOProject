#include "Enemy.h"

Enemy::Enemy(int i)
{
    switch (i){
        case 1:{id="Dragon";}break;
        case 2:{id="Bandit";}break;
        case 3:{id="Orc";}break;

}}

Enemy::~Enemy()
{
    //dtor
}
