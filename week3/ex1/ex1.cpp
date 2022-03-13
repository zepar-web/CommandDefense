#include "Math.cpp"
#include <iostream>

int main()
{
    Math element;
    std::cout << element.Add(10.0, 30.5, 34.24) << std::endl;
    std::cout << element.Add(23, 18) << std::endl;
    std::cout << element.Add(15, 11, 35, 125, 2549, 322, 2209) << std::endl;
    std::cout << element.Add("Adascalitei", "Maria") << std::endl;
}