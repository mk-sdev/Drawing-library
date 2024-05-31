#include "circle.h"
#include "myexceptions.h"

Circle::Circle(Display* w, int r) : Shape(w), radius(r) {
    //if (r <= 0) {
    //    throw MyExceptions("Promiec musi byc liczba dodatnia");
    //}
}

void Circle::draw() {
    display->drawCircle(radius);
}
