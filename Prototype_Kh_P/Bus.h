#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
	std::string color;
public:
	Bus(std::string color) : color{ color } {};
	std::string getColor();
	void setColor(std::string color);
	Bus* clone() override;
};

