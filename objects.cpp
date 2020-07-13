#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "objects.h"
using namespace std; 

Obiekty::Obiekty()
{
    
}
void Obiekty::Pozycja (int X_loc, int Y_loc)
{
    Obiekty::platform.setPosition (X_loc,Y_loc);
}

    






