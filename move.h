#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "main.h"


class Wrogowie
{
    public:
    

};


class Obiekty
{
public:
    
    int X_loc = 640;
    int Y_loc = 780;
    int sizeX = 70;
    int sizeY = 10;
    sf::RectangleShape platform{sf::Vector2f(sizeX,sizeY)};
    private:
    friend class Wrogowie;
    friend void przeciwnicy(int loc_x, int loc_Y);
    sf::RectangleShape wrog {sf::Vector2f(sizeX, sizeY)};
};
//************************************************************************
class Ruch:public Obiekty
{
    public:
    Ruch(int X_loc, int Y_loc);
    void platforma_ruch ();
    private:
    float aktualna_pozX;
    float aktualna_pozY;
    const float wektorX = 11.f;
    const float wektorY = 0.f;
    const float predkosc = 11.f;
    sf::Vector2f rozmieszczenie = {aktualna_pozX, aktualna_pozY};
    sf::Vector2f przemieszczenie = {wektorX, wektorY};
    sf::Vector2f przemieszczenie2 = {-wektorX, wektorY};
    float idealny_czas = 1.f/144;
};

