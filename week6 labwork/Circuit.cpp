#include "Circuit.h"
#include <iostream>

Circuit::Circuit()
{
	carCount = 0;
}

void Circuit::SetLength(int lungime)
{
	this->circLenght = lungime;
}

void Circuit::SetWeather(int vreme)
{
	vreme = vreme;
}

void Circuit::AddCar(Car* c)
{
	masini[carCount++] = c;
}

void Circuit::Race()
{
	for (int i = 0; i < carCount; i++)
	{
		timp[i] = masini[i]->Cursa(circLenght, vreme);
		
	}
}

void Circuit::ShowFinalRanks()
{
	for (int i = 0; i < carCount; i++)
	{
		if (timp[i] != -1)
		{
			std::cout << "Masina " << masini[i]->GetName() << " a terminat cu timpul: " << timp[i] << std::endl;
		}
	}
}

void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < carCount; i++)
	{
		if (timp[i] == -1)
		{
			std::cout << "Masina " << masini[i]->GetName() << " nu a terminat " << std::endl;
		}
	}
}
