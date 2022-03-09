#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char array[] = {'a','u','y','t','g','n','b'};
    int len;
    len = sizeof(array) / sizeof(char);
    printf("%d", len);
    return 0;
}
