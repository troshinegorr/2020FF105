#include <iostream> 

int main()
{
    int n1 = 1234;
    int n2 = 1678;
    int array[4];
    int array1[4];
    int count = 0, i, j;
    bool flag = false;

    while (n1)
    {
        array[count++] = n1 % 10;
        n1 /= 10;
    }
    count = 0;

    while (n2)
    {
        array1[count++] = n2 % 10;
        n2 /= 10;
    }

    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j)
            if (array[i] == array1[j])
            {
                flag = true;
                break;
            }

    if (flag)
        std::cout << "Yes " << std::endl;
    else
        std::cout << "No " << std::endl;
}