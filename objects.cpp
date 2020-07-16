#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "objects.h"
#include "move.h"
using namespace std; 

Obiekty::Obiekty()
{
    
}
void Obiekty::Pozycja (int X_loc, int Y_loc)
{
    Obiekty::platform.setPosition (X_loc,Y_loc);
}

/*void Obiekty::Obiekty_Ruch()
{
     if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        Obiekty::platform.setPosition(20,50);
        //tt.setPosition (20,50);
        std::cout<<"tt\n";
    }
}  */  






