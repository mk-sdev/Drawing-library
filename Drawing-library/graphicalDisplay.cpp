#include "graphicalDisplay.h"
#include <iostream>

void GraphicalDisplay::drawCircle(int r) {
    //if (r <= 0) {
        //throw MyExceptions("Proemin busi byc liczba dodatnia.");
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

