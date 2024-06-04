#include "graphicalDisplay.h"
#include <iostream>
#include "myExceptions.h"

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
        throw MyExceptions("Nieprawidlowe wartosci parametrow");
    }

    float leftCoeff1 = float(a2) / a1;
    float leftCoeff2 = float(b2) / b1;

    float rightCoeffA = (float(a2) - b2) / (a1 - b1);
    float rightCoeffB = a2 - a1 * rightCoeffA;
    for (int y = a2; y >= b2; y--)
    {
        int leftBound = y > 0? std::ceil(y / leftCoeff1) : std::ceil(y / leftCoeff2);
        int rightBound = std::floor((y - rightCoeffB) / rightCoeffA);
        for (int x = 0; x < leftBound; x++) std::cout << ' ';
        for (int x = leftBound; x <= rightBound; x++) std::cout << 't';
        std::cout << '\n';
    }
}

void GraphicalDisplay::drawCircle(int r) {
    if (r <= 0) {
        throw MyExceptions("Promien busi byc liczba dodatnia.");
    }

    int diameter = 2 * r;
    for (int y = 0; y <= diameter; ++y) {
        for (int x = 0; x <= diameter; ++x) {
            int dx = r - x;
            int dy = r - y;
            if ((dx * dx + dy * dy) <= (r * r)) {
                std::cout << 'c';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}

void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
    if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
        throw MyExceptions("Nieprawidlowe wartosci parametrow");
    }
    
    float coeffA = float(a2) / a1;
    float coeffB = float(b2) / b1;

    float aPrimeShift = b2 - coeffA * b1;
    float bPrimeShift = a2 - coeffB * a1;

    for (int y = a2; y >= b2; y--)
    {
        int leftBound = y > 0 ? std::ceil(y / coeffA) : std::ceil(y / coeffB);
        int rightBound = y > a2 + b2 ? std::floor((y - bPrimeShift) / coeffB) : std::floor((y - aPrimeShift) / coeffA);
        for (int x = 0; x < leftBound; x++) std::cout << ' ';
        for (int x = leftBound; x <= rightBound; x++) std::cout << 'p';
        std::cout << '\n';
    }
}