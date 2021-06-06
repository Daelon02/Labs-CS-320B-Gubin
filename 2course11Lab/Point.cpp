#include "Point.h"

POINT::POINT()
{
    SetXY(0, 0);
}

POINT::POINT(int x, int y)
{
    SetXY(x, y);
}

POINT::POINT(POINT& in)
{
    this->x = in.x;
    this->y = in.y;
}

void POINT::SetXY(int X, int Y)
{
    x = X;
    y = Y;
}

void POINT::SumAndProd(int& sum, int& prod)
{
    sum = x + y;
    prod = x * y;
}

void POINT::Output()
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    int s;
    int p;
    SumAndProd(s, p);
    cout << "Сумма: " << s << endl;
    cout << "Произвeдение: " << p << endl;
}
