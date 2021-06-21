#include <iostream>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c, k = 0;
    std::cout << "Введите a:\n> ", std::cin >> a;
    std::cout << "Введите b:\n> ", std::cin >> b;
    std::cout << "Введите c:\n> ", std::cin >> c;
    if (a < 0)
        ++k;
    if (b < 0)
        ++k;
    if (c < 0)
        ++k;
    std::cout << "Количество = " << k;
    fflush(stdin);
    std::cin.get();
    return 0;
}
