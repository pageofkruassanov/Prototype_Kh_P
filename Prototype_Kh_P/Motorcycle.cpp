#include "Motorcycle.h"

std::string Motorcycle::getColor()
{
	return color;
}

void Motorcycle::setColor(std::string color)
{
	this->color = color;
}

Motorcycle* Motorcycle::clone()
{
	std::cout << "Motorcycle successfully copied\n";
	return new Motorcycle(this->color);
}
