#include "Room.h"

void Room::drawroom(sf::RenderWindow &window){
    window.draw(rectanglex0);
    window.draw(rectanglex1);
    window.draw(rectanglex2);
    window.draw(rectanglex3);
    window.draw(rectangley0);
    window.draw(rectangley1);
    window.draw(rectangley2);
    window.draw(rectangley3);
}



Room::~Room()
{
    //dtor
}
