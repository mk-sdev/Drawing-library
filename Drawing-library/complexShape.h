#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H

#include "shape.h"
#include <vector>

/**
 * Klasa reprezentujaca zlozony ksztalt, skladajacy sie z wielu ksztaltow
 */
class ComplexShape : public Shape {
public:
    /**
     * Konstruktor klasy ComplexShape
     * @param w - wskaznik na obiekt klasy Display
     */
    ComplexShape(Display* w);

    /**
     * Dodaje ksztalt do zlozonego ksztaltu
     * @param o -  Wskaznik na ksztalt
     * @return true, jesli ksztalt zostal dodany pomyslnie, false w przeciwnym razie
     */
    bool add(Shape* o);

    /**
     * rysuje zlozony ksztalt na ekranie
     */
    void draw() override;

private:

    static const int MAX_SHAPES = 5; // maksymalna liczba ksztaltow
    Shape* shapes[MAX_SHAPES] = {}; // tablica ksztaltow skladajacych sie na zlozony ksztalt
};

#endif // COMPLEXSHAPE_H
