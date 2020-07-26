#include <iostream>
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <unistd.h>
#include "move.h"
#include "main.h"

void Wrogowie::czas_punkty(Obiekty *platforma_ptr)
{
    
    std::vector<float> sek;
    platforma_ptr->wrog_czas = platforma_ptr->czasomierz.getElapsedTime();
    sek.push_back(platforma_ptr->wrog_czas.asSeconds());
    for (auto &sekk: sek) // zakresowa pętla for
    {
        if (sekk == platforma_ptr->wrog_czas.asSeconds())
        {                             
            std::cout << "Minelo " << sekk << " sekund\n";
            if (platforma_ptr->wrog_czas.asSeconds() > 5)
            {
                std::cout << "Czas minal - koniec gry\n";
                exit(0);
            }
        }
        
    }
    platforma_ptr->czasomierz.restart();
}
//*********************************************************************
void  Wrogowie::wrog_ruch(Ruch & platforma, Obiekty *platforma_ptr)
{
    float wekX = rand()%1200;
    if ((platforma.rozmieszczenie.x < (platforma_ptr->rozmieszczenie_wrog.x + 15)) && (platforma.rozmieszczenie.x > (platforma_ptr->rozmieszczenie_wrog.x - 15)) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)))
    {
        platforma_ptr->wrog.setPosition(wekX, 200);
        platforma_ptr->rozmieszczenie_wrog = platforma_ptr->wrog.getPosition();
        this->czas_punkty(platforma_ptr);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            platforma_ptr->wrog.setFillColor(sf::Color::Green);
        }
    }
    else
        platforma_ptr->rozmieszczenie_wrog = platforma_ptr->wrog.getPosition();
}
//*****************************************************************************
void Wrogowie::przeciwnicy( Obiekty * platforma_ptr)
{
    platforma_ptr->wrog.setFillColor(sf::Color::Red);
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
    }
}