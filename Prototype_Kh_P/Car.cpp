#include "Car.h"

std::string Car::getColor()
{
    return color;
}

double Car::getEngineCapacity()
{
    return engineCapacity;
}

void Car::setColor(std::string color)
{
    this->color = color;
}

void Car::setEngineCapacity(double engineCapacity)
{
    this->engineCapacity = engineCapacity;
}

Car* Car::clone()
{
    std::cout << "Car successfully copied\n";
    return new Car(this->color, this->engineCapacity);
}
