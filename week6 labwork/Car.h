#pragma once
#include "Weather.h"
class Car
{
protected:

	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];
	char* name;

public:
	virtual float Cursa(int circLenght, int vreme) = 0;
	virtual char* GetName() = 0;
	
};

