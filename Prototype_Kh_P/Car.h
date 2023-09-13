#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
	std::string color;
	double engineCapacity;
public:
	Car(std::string color, double engineCapacity) : color{ color }, engineCapacity{ engineCapacity } {};
	std::string getColor();
	double getEngineCapacity();
	void setColor(std::string color);
	void setEngineCapacity(double engineCapacity);
	Car* clone() override;
};

