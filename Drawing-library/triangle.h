#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

/**
 * Klasa reprezentujaca trojkat
 */
class Triangle : public Shape {
public:
    /**
     * Konstruktor klasy Triangle
     * @param w - wskaznik na obiekt klasy Display
     * @param a1 -Wspolrzedna x pierwszego wierzcholka
     * @param a2 - Wspolrzedna y pierwszego wierzcholka
     * @param b1 - Wspolrzedna x drugiego wierzcholka
     * @param b2 - Wspolrzedna y drugiego wierzcholka
     */
    Triangle(Display* w, int a1, int a2, int b1, int b2);

    /**
     * Rysuje trojkat na ekranie
     */
    void draw() override;

private:
    int a1, a2, b1, b2; // wspolrzedne wierzcholkow trojkata
};

#endif // TRIANGLE_H
