#include <iostream>
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <unistd.h>
#include "move.h"
#include "main.h"

void Wrogowie::czas_punkty()
{
    std::vector<int> sek = {5,4,3,2,1};
    for (auto &sekk: sek)
    {                             //jeszcze nie gotowe
        std::cout << "Zosatlo " << sekk << " sekund\n";
    }
}
//*********************************************************************
void  Wrogowie::wrog_ruch(Ruch & platforma, Obiekty *platforma_ptr)
{
    float wekX = rand()%1200;
    this->czas_punkty();
    //std::cout << "test\n";
    if ((platforma.rozmieszczenie.x < (platforma_ptr->rozmieszczenie_wrog.x + 15)) && (platforma.rozmieszczenie.x > (platforma_ptr->rozmieszczenie_wrog.x - 15)) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)))
    {
        platforma_ptr->wrog.setPosition(wekX, 200);
        platforma_ptr->rozmieszczenie_wrog = platforma_ptr->wrog.getPosition();
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            platforma_ptr->wrog.setFillColor(sf::Color::Green);
            //usleep (350000);
        }
        
        //std::cout << "roz to" << platforma_ptr->rozmieszczenie_wrog.x <<"\n";
    }
    else
        platforma_ptr->rozmieszczenie_wrog = platforma_ptr->wrog.getPosition();
        //std::cout << "roz to" << platforma_ptr->rozmieszczenie_wrog.x <<"\n";
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
        //std::cout << "rozmieszcznie x to" << this->rozmieszczenie.x << "rozmieszczenie y to " << this->rozmieszczenie.y << " \n";
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
       // std::cout << "rozmieszcznie x to" << this->rozmieszczenie.x << "rozmieszczenie y to" << this->rozmieszczenie.y << "\n";
    }
}