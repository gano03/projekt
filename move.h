#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "objects.h"
#include "main.h"

class Ruch:public Obiekty
{
    public:
    Ruch(int X_loc, int Y_loc);
    void platforma_ruch ();
    float aktualna_pozX;
    float aktualna_pozY;
    const float wektorX = 1.f;
    const float wektorY = 0.f;
    const float predkosc = 1.5;
    sf::Vector2f rozmieszczenie = {aktualna_pozX, aktualna_pozY};
    sf::Vector2f przemieszczenie = {wektorX, wektorY};
    sf::Vector2f przemieszczenie2 = {-wektorX, wektorY};
    float idealny_czas = 1.f/144;
    float modyfikator_czas;
    sf::Clock kontrola_czas;



};