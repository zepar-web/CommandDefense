#include "Dacia.h"

Dacia::Dacia()
{
    fuelCapacity = 100;
    fuelConsumption = 5;
    averageSpeed[0] = 200;
    averageSpeed[1] = 150;
    averageSpeed[Snow] = 120;
    name = (char*)"Dacia";
}

float Dacia::Cursa(int circLenght, int vreme)
{
    if (circLenght * fuelConsumption / 100 <= fuelCapacity)
        return (circLenght / averageSpeed[vreme]);
    else
        return -1;

}

char* Dacia::GetName()
{
    return name;
}
