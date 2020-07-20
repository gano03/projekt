#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "move.h"
#include "main.h"

void Obiekty::przeciwnicy(int loc_X, int loc_Y, Wrogowie & nazwa)
{
    nazwa.wrog.setFillColor(sf::Color::Red);
    nazwa.wrog.setPosition(loc_X, loc_Y);
}
//******************************************************************************

Ruch::Ruch(int X_loc, int Y_loc)
{
    this->platform.setPosition (X_loc,Y_loc);
}
//*******************************************************************************

void Ruch::platforma_ruch ()
{
    
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)))
    {
        this->platform.move(this->przemieszczenie * this->predkosc * this->idealny_czas);
        this->rozmieszczenie = this->platform.getPosition();
        std::cout << "rozmieszcznie x to" << this->rozmieszczenie.x << "rozmieszczenie y to " << this->rozmieszczenie.y << " \n";
        if (this->rozmieszczenie.x > 1210)
        {
            this->platform.move(-1,0);
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        this->platform.move(this->przemieszczenie2 * this->predkosc * this->idealny_czas);
        this->rozmieszczenie = this->platform.getPosition();
        if (this->rozmieszczenie.x < 0)
        {
            this->platform.move(1,0);
        }
        std::cout << "rozmieszcznie x to" << this->rozmieszczenie.x << "rozmieszczenie y to" << this->rozmieszczenie.y << "\n";
    }
}