#include "parallelogram.h"
#include "myexceptions.h"

Parallelogram::Parallelogram(Display* w, int a1, int a2, int b1, int b2) : Shape(w), a1(a1), a2(a2), b1(b1), b2(b2) {
    if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
        throw MyExceptions("Nieprawidlowe wartosci parametrow");
    }
}

void Parallelogram::draw() {
    if (display == nullptr)
        throw MyExceptions("Nie mozna narysowac rownolegloboka -- brak display.\n");
    display->drawParallelogram(a1, a2, b1, b2);
}
