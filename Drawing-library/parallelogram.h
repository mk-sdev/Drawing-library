#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "shape.h"

/**
 * Klasa reprezentujaca rownoleglobok
 */
class Parallelogram : public Shape {
public:
    /**
     * Konstruktor klasy Parallelogram
     * @param w Wskaznik na obiekt klasy Display
     * @param a1 - Wspolrzedna x pierwszego wierzcholka
     * @param a2 - Wspolrzedna y pierwszego wierzcholka
     * @param b1 - Wspolrzedna x drugiego wierzcholka
     * @param b2 - Wspolrzedna y drugiego wierzcholka
     */
    Parallelogram(Display* w, int a1, int a2, int b1, int b2);

    /**
     * rysuje rownoleglobok na ekranie
     */
    void draw() override;

private:
    int a1, a2, b1, b2; // wspolrzedne wierzcholkow rownolegloboku
};

#endif // PARALLELOGRAM_H
