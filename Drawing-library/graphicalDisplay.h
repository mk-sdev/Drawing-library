#ifndef GRAPHICALDISPLAY_H
#define GRAPHICALDISPLAY_H

#include "display.h"

class GraphicalDisplay : public Display {
public:
    void drawTriangle(int a1, int a2, int b1, int b2) override;
    void drawCircle(int r) override;
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif // GRAPHICALDISPLAY_H
