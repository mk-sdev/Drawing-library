#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
public:
    Circle(Display* w, int r);
    void draw() override;

private:
    int radius;
};

#endif // CIRCLE_H
