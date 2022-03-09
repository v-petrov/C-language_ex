#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = '#';
    char space = ' ';
    int row, sequance;
    for(row = 1;row <= 7;row += 1)
    {
        for(sequance = 1;sequance <= 6;sequance += 1)
        {
            if(row == 1)
            {
                putchar(x);
            }
            else if(row == 2 || row == 3 || row == 5 || row == 6  || row == 7)
            {
                putchar(x);
                break;
            }
            else
            {
                if(sequance != 6)
                {
                    putchar(x);
                }
            }
        }
        printf("\n");
    }
    printf("\n");

    for(row = 1;row <= 9; row += 1)
    {
        for(sequance = 1;sequance <= 12;sequance += 1)
        {
            if(row == 1 || row == 9)
            {
                if(sequance <= 4)
                {
                    putchar(space);
                }
                else if(sequance > 4 && sequance <= 10)
                {
                    putchar(x);
                }
                else
                {
                    putchar(space);
                }
            }
            else if(row == 2 || row == 8)
            {
                if(sequance == 3 || sequance == 4 || sequance == 11 || sequance == 12)
                {
                    putchar(x);
                }
                else
                {
                    putchar(space);
                }
            }
            else
            {
                if(sequance == 2)
                {
                    putchar(x);
                }
                else
                {
                    putchar(space);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
