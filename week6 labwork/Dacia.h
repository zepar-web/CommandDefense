#pragma once
#include "Car.h"

class Dacia : public Car
{
public:
	Dacia();
	float Cursa(int circLenght, int vreme) override ;
	char* GetName() override ;
};

