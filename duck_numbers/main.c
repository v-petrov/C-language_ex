#include "duck_header.h"

int main()
{
    int numbers[SIZE];

    filling_array(numbers);
    displaying_array(numbers);

    printf("\nThe duck numbers are:\n");
    for(int i = 0; i < SIZE; i++)
    {
        duck_number(numbers[i]);
    }
    return 0;
}
