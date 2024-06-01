#ifndef GRAPHICALDISPLAY_H
#define GRAPHICALDISPLAY_H

#include "display.h"

/**
 * Klasa reprezentujaca graficzny ekran wyswietlajacy ksztalty
 */
class GraphicalDisplay : public Display {
public:
    /**
     * Rysuje trojkat na ekranie
     * @param a1 - wspolrzedna x pierwszego wierzcholka
     * @param a2 - wspolrzedna y pierwszego wierzcholka
     * @param b1 - wspolrzedna x drugiego wierzcholka
     * @param b2 - wspolrzedna y drugiego wierzcholka
     */
    void drawTriangle(int a1, int a2, int b1, int b2) override;

    /**
     * Rysuje okrag na ekranie
     * @param r - Promien okregu
     */
    void drawCircle(int r) override;

    /**
     * Rysuje rownoleglobok na ekranie
     * @param a1 - wspolrzedna x pierwszego wierzcholka
     * @param a2 - wspolrzedna y pierwszego wierzcholka
     * @param b1 - wspolrzedna x drugiego wierzcholka
     * @param b2 - wspolrzedna y drugiego wierzcholka
     */
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif // GRAPHICALDISPLAY_H
