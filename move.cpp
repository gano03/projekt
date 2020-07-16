#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "move.h"
#include "objects.h"

void Ruch::platforma_ruch (Obiekty & platforma)
{
    
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)))
    {
        
        platforma.platform.move(Ruch::wektorX,Ruch::wektorY);
        //platforma.platform.getPosition(); // do napisania
        
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        platforma.platform.move(-Ruch::wektorX, Ruch::wektorY);
    }
    
}