//Paweł Ganobis
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "objects.h"
using namespace std;
/*void pozycje(Obiekty platforma);
void pozycje (Obiekty platforma)
{
    
}*/ 
int main()
{
    sf::RenderWindow gra_okno{sf::VideoMode(1024,768 ), "Arkanoid"}; 
    Obiekty platforma {};
    cout << "tt\n";

    while (gra_okno.isOpen())
    {
        sf::Event event;
        while (gra_okno.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                gra_okno.close();
        }

        gra_okno.clear();
        gra_okno.draw(platforma.platform);
        platforma.Pozycja(platforma.X_loc, platforma.Y_loc);
        gra_okno.display(); // test1
        //shape.setPosition(300, 200);
    }

    return 0;
}