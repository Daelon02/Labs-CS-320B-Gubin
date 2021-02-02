#include <iostream>

int sum(int a, int b)
{
    int res = a;

    for (int i = 1; i <= b; ++i)
    {
        ++res;
    }

    return res;
}

int main()
{
    int a, b;

    std::cout << "Введите a: ";
    std::cin >> a;

    std::cout << "Введите b: ";
    std::cin >> b;

    std::cout << "Сумма = " << sum(a, b) << "\n";

    return 0;
}