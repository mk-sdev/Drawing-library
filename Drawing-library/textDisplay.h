#pragma once
#include "display.h"

/**
 * Klasa sluzaca do tekstowego wyswietlania obiektow
 */
class TextDisplay :
    public Display
{
public:
    /**
     * Funkcja wypisujaca tekst: Drawing a triangle from vectors (a1, a2), (b1, b2).
     * @param a1 - wspolrzedna x pierwszego wierzcholka
     * @param a2 - wspolrzedna y pierwszego wierzcholka
     * @param b1 - wspolrzedna x drugiego wierzcholka
     * @param b2 - wspolrzedna y drugiego wierzcholka
     */
    void drawTriangle(int a1, int a2, int b1, int b2) override;

    /**
     * Funkcja wypisujaca tekst: Drawing a circle with radius r.
     * @param r - Promien okregu
     */
    void drawCircle(int r) override;

    /**
     * Funkcja wypisujaca tekst: Drawing a parallelogram from vectors (a1, a2), (b1, b2).
     * @param a1 - wspolrzedna x pierwszego wierzcholka
     * @param a2 - wspolrzedna y pierwszego wierzcholka
     * @param b1 - wspolrzedna x drugiego wierzcholka
     * @param b2 - wspolrzedna y drugiego wierzcholka
     */
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

