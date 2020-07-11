//Paweł Ganobis
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace std; 
int main()
{
    sf::RenderWindow gra{sf::VideoMode(1024,768 ), "Arkanoid"};
    sf::CircleShape shape(150.f);
    shape.setFillColor(sf::Color::Green);

    while (gra.isOpen())
    {
        sf::Event event;
        while (gra.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) 
                gra.close();
        }

        gra.clear();
        gra.draw(shape);
        gra.display(); // test1
    }

    return 0;
}