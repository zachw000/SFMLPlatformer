#include <SFML/Graphics.hpp>
#include "headers/VideoMode.hpp"

int main()
{
    sf::RenderWindow window(video::VideoModeHandler::getBestMode(), "Test");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
