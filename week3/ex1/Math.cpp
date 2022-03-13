#include "Math.h"
#include <iostream>
#include <string.h>
#include <stdarg.h> // pt va_start
#pragma warning(disable:4996) //sa mearga strcpy

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

double Math::Add(double x, double y)
{
	return x + y;
}

double Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

double Math::Mul(double x, double y)
{
	return x * y;
}

double Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count, ...)
{
	int x, suma = 0;
	va_list list1; //am creat o lista
	va_start(list1, count); //alocam spatiu
	for (int i = 0; i < count; i++)
	{
		x = va_arg(list1, int);
		suma += x;
	}
	return suma;
}

char* Math::Add(const char* firstS, const char* secondS)
{
	if (firstS == nullptr || secondS == nullptr)
		return nullptr;//daca sirul e null returnam
	char* buffer = new char[strlen(firstS) + strlen(secondS) + 1];
	strcpy(buffer, firstS);
	strcpy(buffer + strlen(firstS), secondS);
	buffer[strlen(firstS) + strlen(secondS) + 1] = '\0';
	
	return buffer;

}
