#include "Weather.h"
#include "Car.h"
#include "Dacia.h"

class Circuit
{
	int circLenght;
	int vreme;
	Car* masini[10];
	int carCount;
	float timp[10];

public:
	Circuit();
	void SetLength(int);
	void SetWeather(int);
	void AddCar(Car*);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

