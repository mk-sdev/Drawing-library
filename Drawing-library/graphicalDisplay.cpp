#include "graphicalDisplay.h"
#include <iostream>
#include "myExceptions.h"


void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    // sprawdzanie poprawnosci wartosci parametrow
    if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
        throw MyExceptions("Nieprawidlowe wartosci parametrow");
    }

    // obliczanie wspolczynnikow dla lewych bokow trojkata
    float leftCoeff1 = float(a2) / a1;
    float leftCoeff2 = float(b2) / b1;

    // obliczanie wspolczynnikow dla prawego boku trojkata
    float rightCoeffA = (float(a2) - b2) / (a1 - b1);
    float rightCoeffB = a2 - a1 * rightCoeffA;

    // rysowanie trojkata
    for (int y = a2; y >= b2; y--) {
        // wyznaczanie lewej granicy
        int leftBound = y > 0 ? std::ceil(y / leftCoeff1) : std::ceil(y / leftCoeff2);

        // wyznaczanie prawej granicy
        int rightBound = std::floor((y - rightCoeffB) / rightCoeffA);

        // rysowanie spacji przed trojkatem
        for (int x = 0; x < leftBound; x++) std::cout << ' ';

        // rysowanie trojkata
        for (int x = leftBound; x <= rightBound; x++) std::cout << 't';
        std::cout << '\n';
    }
}


void GraphicalDisplay::drawCircle(int r) {
    // sprawdzanie poprawnosci wartosci promienia
    if (r <= 0) {
        throw MyExceptions("Promien busi byc liczba dodatnia");
    }

    // srednica kola
    int diameter = 2 * r;

    // rysowanie kola
    for (int y = 0; y <= diameter; ++y) {
        for (int x = 0; x <= diameter; ++x) {
            // obliczanie odleglosci od srodka
            int dx = r - x;
            int dy = r - y;

            // sprawdzanie, czy punkt nalezy do kola
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
    // sprawdzanie poprawnosci wartosci parametrow
    if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
        throw MyExceptions("Nieprawidlowe wartosci parametrow");
    }

    // obliczanie wspolczynnikow dla bokow rownolegloboku
    float coeffA = float(a2) / a1;
    float coeffB = float(b2) / b1;

    // obliczanie przesuniecia dla drugiego boku rownolegloboku
    float aPrimeShift = b2 - coeffA * b1;
    float bPrimeShift = a2 - coeffB * a1;

    // rysowanie rownolegloboku
    for (int y = a2; y >= b2; y--) {
        // wyznaczanie lewej granicy
        int leftBound = y > 0 ? std::ceil(y / coeffA) : std::ceil(y / coeffB);

        // wyznaczanie prawej granicy
        int rightBound = y > a2 + b2 ? std::floor((y - bPrimeShift) / coeffB) : std::floor((y - aPrimeShift) / coeffA);

        // rysowanie spacji przed rownoleglobokiem
        for (int x = 0; x < leftBound; x++) std::cout << ' ';

        // rysowanie rownolegloboku
        for (int x = leftBound; x <= rightBound; x++) std::cout << 'p';
        std::cout << '\n';
    }
}
