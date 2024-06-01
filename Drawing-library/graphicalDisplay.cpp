#include "graphicalDisplay.h"
#include <iostream>

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    //if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
    //    throw MyExceptions("Nieprawidlowe wartosci parametrow");
    //}

    int width = a1;
    int height = a2 > -b2 ? a2 : -b2;

    for (int y = height; y >= -height; --y) {
        for (int x = 0; x <= width; ++x) {
            if ((x == 0 && y == 0) ||
                (x == a1 && y == a2) ||
                (x == b1 && y == b2) ||
                ((a2 != 0 && y == x * a2 / a1) && x <= a1) ||
                ((b2 != 0 && y == x * b2 / b1) && x <= b1) ||
                ((a1 != 0 && y == (x - a1) * b2 / b1 + a2) && x >= a1 && x <= width)) {
                std::cout << 't';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}

void GraphicalDisplay::drawCircle(int r) {
    //if (r <= 0) {
        //throw MyExceptions("Promien busi byc liczba dodatnia.");
    //}

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
    //if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
    //    throw MyExceptions("Nieprawidlowe wartosci parametrow");
    //}

    int width = a1 + b1;
    int height = a2 > -b2 ? a2 : -b2;

    for (int y = height; y >= -height; --y) {
        int leadingSpaces = y > 0 ? height - y : -y;

        for (int i = 0; i < leadingSpaces; ++i) {
            std::cout << ' ';
        }

        for (int x = 0; x <= width; ++x) {
            if ((y <= x * a2 / a1 && y >= x * b2 / b1 && x <= a1) ||
                (y <= (x - b1) * a2 / a1 + b2 && y >= (x - a1) * b2 / b1 + a2 && x > b1)) {
                std::cout << 'p';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}