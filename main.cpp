//Paweł Ganobis
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "move.h"
#include "main.h"
using namespace std;
int main()
{
    sf::RenderWindow gra_okno{sf::VideoMode(1280,800 ), "Arkanoid"};
    gra_okno.setVerticalSyncEnabled(true);
    Obiekty platforma;
    Ruch platformy{platforma.X_loc, platforma.Y_loc};
    Wrogowie *wrogowie= new (Wrogowie);
    Obiekty *platforma_ptr = new (Obiekty);


    while (gra_okno.isOpen())
    {
        sf::Event event;
        while (gra_okno.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                gra_okno.close();
        }
        gra_okno.clear();
        platformy.platforma_ruch();
        wrogowie->przeciwnicy(platforma_ptr);
        wrogowie->wrog_ruch(platformy, platforma_ptr);
        gra_okno.draw(platformy.platform);
        gra_okno.draw(platforma_ptr->wrog);
        gra_okno.display();
    }
    return 0;
}