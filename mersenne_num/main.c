#include <stdio.h>
#include <stdlib.h>

void mersenne_num(int);

int main()
{
    int num, range;
//    printf("Num = ");
//    scanf("%d", &num);
    printf("Range = ");
    scanf("%d", &range);

    mersenne_num(range);

    return 0;
}

void mersenne_num(int range)
{
    int two = 2, two_power = 2, j;
    for(int i = 1; i <= range ; i++)
    {
        if(i + 1 == two_power)
        {
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    break;
                }
            }
            if(i == j)
            {
                printf("%d ", i);
            }
            two_power *= two;
//            ff = 1;
        }
//        two_power *= two;
    }
//    if(!ff)
//    {
//        printf("Not a marsenne num\n");
//    }
}
