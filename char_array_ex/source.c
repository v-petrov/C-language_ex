#include "header.h"

int *max_min(int *array)
{
    static int max_min[2];
    *max_min = *array;
    *(max_min + 1) = *array;

    for(int i = 0; i < SIZE; i++)
    {
        if(*max_min > *(array + i))
        {
            *max_min = *(array + i);
        }
        if(*(max_min + 1) < *(array + i))
        {
            *(max_min + 1) = *(array + i);
        }
    }

    return max_min;
}
int str_length(char *s)
{
    int i = 0,len = -1;
    while(*(s + i) != '\0')
    {
        len++;
        i++;
    }

    return len;
}
void separate_chars(char *s)
{
    int i = 0;
    while(*(s + i) != '\0')
    {
        printf("%c  " , *(s + i));
        i++;
    }
}
void reverse_str(char *s, int len)
{
//    for(int i = len - 1; i >= 0; i--)
//    {
//        printf("%c  ", *(s + i));
//    }

    int j = len;
    char temp;

    for(int i = 0; i < len/2; i++)
    {
        temp = *(s + i);
        *(s + i) = *(s + j - 1);
        *(s + j - 1) = temp;
        j--;
    }

    for(int k = 0; k < len; k++)
    {
        printf("%c  ", *(s + k));
    }
}
int num_of_words(char *s, int len)
{
    char ws = ' ';
    int ws_cnt = 0;
    for(int i = 0; i < len; i++)
    {
        if(*(s + i) == ws)
        {
            ws_cnt++;
        }
    }

    return ws_cnt;
}
