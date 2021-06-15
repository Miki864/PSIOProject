#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <Entity.h>
#include <Room.h>
#include <Character.h>

int main()
{   Room* pokoj=new Room(1,1);
    sf::RenderWindow window(sf::VideoMode(600, 600),"Brightest Dungeon",sf::Style::Close|sf::Style::Titlebar);
    pokoj->setrectangles();
    // run the program as long as the window is open
    while (window.isOpen()) {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Black);
        pokoj->drawroom(window);

        window.display();
    }
    delete pokoj;
    return 0;
}
