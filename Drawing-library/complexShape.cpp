#include "complexShape.h"
#include "myexceptions.h"

ComplexShape::ComplexShape(Display* w) : Shape(w) {}

bool ComplexShape::add(Shape* o) {
    if (o == nullptr)
        throw MyExceptions("Nieprawidlowy argument.\n");

    if (shapes.size() < MAX_SHAPES) {
        shapes.push_back(o);
        return true;
    }
    return false;
}

void ComplexShape::draw() {
    for (Shape* shape : shapes) {
        shape->draw();
    }
}
