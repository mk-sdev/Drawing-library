#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

/**
 * Klasa reprezentujaca okrag
 */
class Circle : public Shape {
public:
    /**
     * Konstruktor klasy Circle
     * @param w - wskaznik na obiekt klasy Display
     * @param r  - promien okregu
     */
    Circle(Display* w, int r);

    /**
     * rysuje okrag na ekranie
     */
    void draw() override;

private:
    int radius; // promien okregu
};

#endif // CIRCLE_H
