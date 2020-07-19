#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "move.h"
#include "objects.h"
#include "main.h"

Ruch::Ruch(int X_loc, int Y_loc)
{
    this->platform.setPosition (X_loc,Y_loc);
}


void Ruch::platforma_ruch ()
{
    
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)))
    {
        sf::Time czas_iteracji = this->kontrola_czas.getElapsedTime();
        this->modyfikator_czas = czas_iteracji.asSeconds()/this->idealny_czas;
        this->platform.move(this->przemieszczenie * this->predkosc * this->modyfikator_czas);
        this->rozmieszczenie = this->platform.getPosition();
        std::cout << "rozmieszcznie x to" << this->rozmieszczenie.x << "rozmieszczenie y to " << this->rozmieszczenie.y << " \n";
        if (this->rozmieszczenie.x > 900)
        {
            //this->platform.move(0,0);
        }
        this->kontrola_czas.restart();
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        sf::Time czas_iteracji = this->kontrola_czas.getElapsedTime();
        this->modyfikator_czas = czas_iteracji.asSeconds()/this->idealny_czas;
        this->platform.move(this->przemieszczenie2 * this->predkosc * this->modyfikator_czas);
        this->rozmieszczenie = this->platform.getPosition();
        std::cout << "rozmieszcznie x to" << this->rozmieszczenie.x << "rozmieszczenie y to" << this->rozmieszczenie.y << "\n";
        this->kontrola_czas.restart();
    }

}