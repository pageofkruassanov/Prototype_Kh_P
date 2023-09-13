#include "Bus.h"

std::string Bus::getColor()
{
    return color;
}

void Bus::setColor(std::string color)
{
    this->color = color;
}

Bus* Bus::clone()
{
    std::cout << "Bus successfully copied\n";
    return new Bus(this->color);
}
