//Paweł Ganobis
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window{sf::VideoMode(800,600 ), "Arkanoid"};
    sf::CircleShape shape(150.f);
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
        window.display(); // test1
    }

    return 0;
}