#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "objects.h"

class Ruch:public Obiekty
{
    public:
    void platforma_ruch (Obiekty & platforma);
    float aktualna_pozX;
    float aktualna_pozY;
    float wektorX=5;
    float wektorY=0;



};