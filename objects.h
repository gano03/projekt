#pragma once 
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
//#include "move.h"
using namespace std; 
class Obiekty
{
public:
    
    
    //void Pozycja(int X_loc, int Y_loc);
    int X_loc = 640;
    int Y_loc = 780;
    int sizeX = 70;
    int sizeY = 10;
    sf::RectangleShape platform{sf::Vector2f(sizeX,sizeY)};
    //Obiekty (int X_loc, int Y_loc);
};