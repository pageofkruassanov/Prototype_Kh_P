#include <iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorcycle.h"
#include <map>

int main()
{
    std::map<std::string, Vehicle*> cars;
    cars["Audi"] = new Car("black", 3.5);
    cars["Yamaha"] = new Motorcycle("yellow");
    cars["Bus"] = new Bus("orange");
    
    Car* audi = dynamic_cast<Car*>(cars["Audi"]->clone());
    Bus* bus = dynamic_cast<Bus*>(cars["Bus"]->clone());
    Motorcycle* moto = dynamic_cast<Motorcycle*>(cars["Yamaha"]->clone());
    system("pause");
    
}