#ifndef SHAPE_H
#define SHAPE_H

#include "display.h"

class Shape {
public:
    Shape(Display* w);
    virtual void draw() = 0;
    void changeDisplay(Display* newDisplay);
    virtual ~Shape();

protected:
    Display* display;
};

#endif // SHAPE_H
