#include <stdio.h>
#include <conio.h>

int main()
{
    int d, r, u, g, str1, str2, str3;

    for (d = 1; d < 10; d++) // 1-ый цикл
    {
        for (r = 0; r < 10; r++) // 2-ой цикл
        {
            if (r == d) continue;
            for (u = 0; u < 10; u++) // 3-ий цикл
            {
                if ((u == d) || (u == r)) continue;
                for (g = 1; g < 10; g++) // 4-ый цикл
                {
                    if ((g == d) || (g == r) || (g == u)) continue;
                    str1 = (d * 1000) + (r * 100) + (u * 10) + g; // Составляем DRUG из цифр
                    str2 = (g * 1000) + (u * 100) + (r * 10) + d; // Составляем GUGD из цифр
                    str3 = str1 - str2; // DRUG - GURD
                    if ((str3) == 2727) // Если результат = 2727, то...
                    {
                        printf("\n DRUG:   %d", str1); // вывести 
                        printf("\n GURD: - %d", str2); // результат
                        printf("\n         ----");
                        printf("\n         %d", str3); // на экран
                        printf("\n ");
                    }
                }
            }
        }
    }
    return 0;
}