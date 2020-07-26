#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "main.h"

class Obiekty
{
public:
    
    int X_loc = 640;
    int Y_loc = 780;
    int sizeX = 70;
    int sizeY = 10;
    sf::RectangleShape platform{sf::Vector2f(sizeX,sizeY)};
    sf::RectangleShape wrog {sf::Vector2f(sizeX, sizeY)};
    friend class Wrogowie; //deklaracja przyjaciela
    private:
    float wrog_aktX;
    float wrog_aktY;
    int enemy_loc_X = 400;
    int enemy_loc_Y = 200;
    sf::Vector2f rozmieszczenie_wrog = {wrog_aktX, wrog_aktY};
   
};
//************************************************************************
class Ruch:public Obiekty //dziedziczenie
{
    public:
    Ruch(int X_loc, int Y_loc);
    Ruch(int k){};
    ~Ruch(){};
    virtual void wrog_ruch(Ruch & platforma, Obiekty *platforma_ptr){std::cout << "Funkcja klasy bazowej'n";}; //metoda wirtualna
    void platforma_ruch ();
    //private:
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

class Wrogowie:public Ruch 
{
    public:
    void przeciwnicy (Obiekty * platforma_ptr);
    void wrog_ruch(Ruch & platforma, Obiekty *platforma_ptr);
    void czas_punkty();
    Wrogowie(Obiekty *platforma_ptr)
    :Ruch(10){platforma_ptr->wrog.setPosition(platforma_ptr->enemy_loc_X, platforma_ptr->enemy_loc_Y);}
};