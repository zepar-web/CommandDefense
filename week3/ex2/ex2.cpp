#include <iostream>
#include "Canvas.cpp"

int main()
{
    Canvas canvas(50, 150);
    canvas.FillCircle(10, 10, 4, 'R');
    canvas.FillRect(20, 20, 30, 30, 'A');
    canvas.DrawCircle(6, 30, 5, '$');
    canvas.DrawRect(45, 6, 67, 12, 'H');
    canvas.FillRect(50, 8, 62, 10, 'J');
    canvas.SetPoint(1, 1, 'K');
    canvas.DrawLine(23, 50, 28, 58, '#');
    canvas.Print();
}
