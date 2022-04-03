#include "header.h"

int main()
{
//    //#1
//    int nums[SIZE], *p;
//
//    for(int i = 0; i < SIZE; i++)
//    {
//        printf("nums[%d] = ", i + 1);
//        scanf("%d", nums + i);
//    }
//
//    p = max_min(nums);
//
//    printf("Minimum num is: %d\n", *p++);
//    printf("Maximum num is: %d\n", *p);
//
//    //#2
//    char str[100];
//    int len;
//    fgets(str, 100, stdin);
//
//    len = str_length(str);
//
//    printf("The length of the text is: %d", len);
//
//    //#3
//    char str[100];
//    fgets(str, 100, stdin);
//
//    separate_chars(str);
//
//    //#4
//    char str[100];
//    fgets(str, 100, stdin);
//    int len;
//
//    len = str_length(str);
//
//    reverse_str(str, len);
//
//    //#5
//    char str[100];
//    fgets(str, 100, stdin);
//    int len, words;
//
//    len = str_length(str);
//    words = num_of_words(str, len);
//
//    if(!words)
//    {
//        printf("Total number of words in the string is : 1");
//    }
//    else
//    {
//        printf("Total number of words in the string is : %d", words + 1);
//    }
//
//    //#6
//    char str[100];
//    fgets(str, sizeof(str), stdin);
//    int len;
//
//    len = str_length(str);
//    str_in_ascending(str, len);
//
//    for(int i = 0; i < len; i++)
//    {
//        printf("%c", *(str + i));
//    }

    //#7
//    char str[100];
//    fgets(str, sizeof(str), stdin);
//    int start, len;
//    printf("Input the position to start extraction: ");
//    scanf("%d", &start);
//    printf("Input the length of substring: ");
//    scanf("%d", &len);
//
//    seqence_in_str(str, start, len);

    //#8
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len;

    len = str_length(str);
    low_to_upp_and_upp_to_low(str, len);

    for(int i = 0; i < len; i++)
    {
        printf("%c", *(str + i));
    }

    return 0;
}
