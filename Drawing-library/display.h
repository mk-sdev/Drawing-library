#ifndef DISPLAY_H
#define DISPLAY_H

/**
 * Klasa abstrakcyjna reprezentujaca ekran wyswietlajacy ksztalty
 */
class Display {
public:
    /**
     * Rysuje trojkat na ekranie
     * @param a1 - wspolrzedna x pierwszego wierzcholka
     * @param a2 - wspolrzedna y pierwszego wierzcholka
     * @param b1 - wspolrzedna x drugiego wierzcholka
     * @param b2 - wspolrzedna y drugiego wierzcholka
     */
    virtual void drawTriangle(int a1, int a2, int b1, int b2) = 0;

    /**
     * Rysuje okrag na ekranie
     * @param r - Promien okregu
     */
    virtual void drawCircle(int r) = 0;

    /**
     * Rysuje rownoleglobok na ekranie
     * @param a1 - wspolrzedna x pierwszego wierzcholka
     * @param a2 - wspolrzedna y pierwszego wierzcholka
     * @param b1 - wspolrzedna x drugiego wierzcholka
     * @param b2 - wspolrzedna y drugiego wierzcholka
     */
    virtual void drawParallelogram(int a1, int a2, int b1, int b2) = 0;

    virtual ~Display() = default; // domyslny destruktor
};

#endif // DISPLAY_H
