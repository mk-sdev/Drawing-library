#include "complexShape.h"
#include "myexceptions.h"

ComplexShape::ComplexShape(Display* w) : Shape(w) {}

bool ComplexShape::add(Shape* o) {
    if (o == nullptr)
        throw MyExceptions("Nieprawidlowy argument.\n");

    for (int i = 0; i < MAX_SHAPES; i++)
    {
        if (shapes[i] == nullptr) {
            shapes[i] = o;
            return true;
        }    
    }

    return false;
}

void ComplexShape::draw() {
    for (int i = 0; i < MAX_SHAPES; i++)
    {
        if (shapes[i] == nullptr)
            return;
        shapes[i]->draw();
    }
}
