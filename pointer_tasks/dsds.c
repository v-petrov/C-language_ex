#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char array[100];
    int len;
    len = sizeof(array) / sizeof(char);
    printf("%d", len);
    return 0;
}
