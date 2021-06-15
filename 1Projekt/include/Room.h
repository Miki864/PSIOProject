#ifndef ROOM_H
#define ROOM_H
#include <Enemy.h>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Room
{
    public:
        Room(int i,int k){id=i;Enemy_kind=k;};
        ~Room();

        sf::RectangleShape rectanglex0;
        sf::RectangleShape rectangley0;
        sf::RectangleShape rectanglex1;
        sf::RectangleShape rectanglex2;
        sf::RectangleShape rectanglex3;
        sf::RectangleShape rectangley1;
        sf::RectangleShape rectangley2;
        sf::RectangleShape rectangley3;

        void setrectangles(){

        rectanglex0=sf::RectangleShape(sf::Vector2f(250.0,75.0));
        rectangley0=sf::RectangleShape(sf::Vector2f(75.0,250.0));
        rectanglex0.setFillColor(sf::Color(100, 50, 250));
        rectangley0.setFillColor(sf::Color(100, 50, 250));

        sf::RectangleShape rectanglex1=sf::RectangleShape(sf::Vector2f(75.0,250.0));
        rectanglex1.setFillColor(sf::Color(100, 50, 250));
        sf::RectangleShape rectanglex2=rectanglex0;
        sf::RectangleShape rectanglex3=rectanglex0;
        sf::RectangleShape rectangley1=rectangley0;
        sf::RectangleShape rectangley2=rectangley0;
        sf::RectangleShape rectangley3=rectangley0;

        rectanglex0.setPosition(0,0);
        rectangley0.setPosition(0,0);
        rectanglex1.setPosition(400,0);
        rectangley1.setPosition(525,0);
        rectanglex2.setPosition(0,525);
        rectangley2.setPosition(0,400);
        rectanglex3.setPosition(400,525);
        rectangley3.setPosition(525,400);}
        void drawroom(sf::RenderWindow &window);
    protected:
        int Enemy_kind;
        int id;
        int roomleft=0,roomright=0,roomup=0,roomdown=0;
        Enemy* inhabitant=new Enemy(Enemy_kind);
    private:
};

#endif // ROOM_H
