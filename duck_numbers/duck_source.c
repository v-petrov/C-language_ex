#include "duck_header.h"

void duck_number(int n)
{
    int n1 = n;
    int remainder;
    while(n1 > 0)
    {
        remainder = n1 % 10;
        if(remainder == 0)
        {
            printf("%d\n", n);
            break;
        }
        n1 /= 10;
    }
}

void filling_array(int numbers[])
{
    srand(time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand() % 3000;
    }
}

void displaying_array(int numbers[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", numbers[i]);
    }

}
