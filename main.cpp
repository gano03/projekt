//Paweł Ganobis
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "objects.h"
#include "move.h"
#include "main.h"
using namespace std;
/*void pozycje(Obiekty platforma);
void pozycje (Obiekty platforma)
{
    
}*/ 
int main()
{
    sf::RenderWindow gra_okno{sf::VideoMode(1280,800 ), "Arkanoid"};
    gra_okno.setVerticalSyncEnabled(true);
    Obiekty platforma;
    Ruch platformy{platforma.X_loc, platforma.Y_loc};

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
        gra_okno.draw(platformy.platform);
        gra_okno.display();
    }

    return 0;
}