#include "circle.h"
#include "myexceptions.h"

Circle::Circle(Display* w, int r) : Shape(w), radius(r) {
    //if (r <= 0) {
    //    throw MyExceptions("Promiec musi byc liczba dodatnia");
    //}
}

void Circle::draw() {
    if (display == nullptr)
        throw MyExceptions("Nie mozna narysowac okrega -- brak display.\n");
    display->drawCircle(radius);
}
