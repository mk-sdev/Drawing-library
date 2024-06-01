#ifndef SHAPE_H
#define SHAPE_H

#include "display.h"

/**
 * Klasa abstrakcyjna reprezentujaca ksztalt
 */
class Shape {
public:
    /**
     * Konstruktor klasy Shape
     * @param w - wskaznik na obiekt klasy Display
     */
    Shape(Display* w);

    /**
     * rysuje ksztalt na ekranie
     */
    virtual void draw() = 0;

    /**
     * zmienia ekran, na ktorym rysowany jest ksztalt
     * @param newDisplay - wskaznik na nowy obiekt klasy Display
     */
    void changeDisplay(Display* newDisplay);

    virtual ~Shape(); // domyslny destruktor

protected:
    Display* display; // wskaznik na obiekt klasy Display
};

#endif // SHAPE_H
