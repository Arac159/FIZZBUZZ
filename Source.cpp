#include <stdio.h>

int main()
{
    int *array = new int[100];
    int j = 0;
    for (int i = 0; i < 100; i++)
    {
        array[j] = i;
        if (array[j] % 3 == 0 && array[i] % 5 != 0)
        {
            printf("The number %i is FIZZ\n", array[j]);
        }
        if (array[j] % 3 == 0 && array[j] % 5 == 0)
        {
            printf("The number %i is FIZZ and BUZZ\n", array[j]);
        }
        j = j++;

    }
    getchar();
    return 0;
    
}
