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
    //sf::RectangleShape platform (sf::Vector2f (sizeX, sizeY));
    Obiekty ();
    void Pozycja(int X_loc, int Y_loc);
    //void Obiekty_Ruch();
    int X_loc = 1024/2;
    int Y_loc = 750;
    int sizeX = 70;
    int sizeY = 10;
    sf::RectangleShape platform{sf::Vector2f(sizeX,sizeY)};

};