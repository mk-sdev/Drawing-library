#include <iostream>
#include "graphicalDisplay.h"
#include "textDisplay.h"
#include "circle.h"
#include "triangle.h"
#include "parallelogram.h"
#include "complexShape.h"
#include "display.h"
#include "shape.h"
using namespace std;
int main() {
	// tworzenie wyswietlaczy
	Display* w1 = new GraphicalDisplay();
	Display* w2 = new TextDisplay();

	//tworzenie figur
	Shape* o1 = new Triangle(w1, 3, 2, 2, -2);
	Shape* o2 = new Parallelogram(w1, 3, 2, 2, -2);
	Shape* o3 = new Circle(w1, 5);
	ComplexShape* o4 = new ComplexShape(w1);

	try
	{
		// dodanie figur do zlozonej figury
		o4->add(o1);
		o4->add(o2);
		o4->add(o3);
		o4->draw();

		// rysuj figury graficznie
		o1->draw();
		o2->draw();
		o3->draw();

		// zmien wyswietlacz
		o1->changeDisplay(w2);
		o2->changeDisplay(w2);
		o3->changeDisplay(w2);
		o4->changeDisplay(w2);

		// rysuj tekstowo
		o4->draw();
		o1->draw();
		o2->draw();
		o3->draw();
	}
	catch (const exception& e)
	{
		cerr << e.what();
	}
	
	// zwolnienie pamieci
	delete o1;
	delete o2;
	delete o3;
	delete o4;
	delete w2;
	delete w1;
	return 0;
}