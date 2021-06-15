#include "Cegla.h"

Cegla::Cegla(char a)
{
    if(a=='l'||a=='L'){tekstura.loadFromFile("wall.png");setTexture(tekstura);setTextureRect(sf::IntRect(0,0,250,75));}
    if(a=='p'||a=='P'){tekstura.loadFromFile("wall.png");setTexture(tekstura);setTextureRect(sf::IntRect(0,0,75,250));}
}

Cegla::~Cegla()
{
    //dtor
}
