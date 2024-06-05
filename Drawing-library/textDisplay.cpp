#include "textDisplay.h"
#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include "myExceptions.h"

void TextDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
	if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
		throw MyExceptions("Nieprawidlowe wartosci parametrow");
	}
	std::cout << std::format("Rysowanie trojkata z wektorow ({}, {}), ({}, {}).\n", a1, a2, b1, b2);
}

void TextDisplay::drawCircle(int r)
{
	if (r <= 0) {
		throw MyExceptions("Promien busi byc liczba dodatnia.");
	}
	std::cout << std::format("Rysowanie o promieniu {}.\n", r);
}

void TextDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
	if (a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0) {
		throw MyExceptions("Nieprawidlowe wartosci parametrow");
	}
	std::cout << std::format("Rysowanie rownolegloboku z wektorow ({}, {}), ({}, {}).\n", a1, a2, b1, b2);
}
