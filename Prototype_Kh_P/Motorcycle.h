#pragma once
#include "Vehicle.h"
class Motorcycle : public Vehicle
{
	std::string color;
public:
	Motorcycle(std::string color) : color{ color } {};
	std::string getColor();
	void setColor(std::string color);
	Motorcycle* clone() override;
};

