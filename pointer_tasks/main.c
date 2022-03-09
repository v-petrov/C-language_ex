#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
#define TRUE 1

int add_two_numbers(int *, int *);
int length_str(char *);
void swapping_pos(int *,int *,int *);
void sorting_array(int *, int);
void display_array(int *, int);
void reversing_str(char *, int);

int main()
{
    //#1
//    int a,b,sum;
//    printf("Input the first number: ");
//    scanf("%d", &a);
//    printf("Input the second number: ");
//    scanf("%d", &b);
//    sum = add_two_numbers(&a,&b);
//
//    printf("The sum of %d and %d is %d", a, b, sum);

    //#2
//    char s[SIZE];
//    int len;
//    printf("Enter a string: ");
//    fgets(s, sizeof(s), stdin);
//    len = length_str(s);
//    printf("The length of the string %s is: %d", s, len - 1);

    //#3
//    int n1,n2,n3;
//    printf("Input the value of 1st element: ");
//    scanf("%d", &n1);
//    printf("Input the value of 2nd element: ");
//    scanf("%d", &n2);
//    printf("Input the value of 3rd element: ");
//    scanf("%d", &n3);
//
//    printf("The values before swapping are: \n");
//    printf("Element 1 = %d\n", n1);
//    printf("Element 1 = %d\n", n2);
//    printf("Element 1 = %d\n", n3);
//
//    swapping_pos(&n1,&n3,&n3);
//
//    printf("The values after swapping are: \n");
//    printf("Element 1 = %d\n", n1);
//    printf("Element 1 = %d\n", n2);
//    printf("Element 1 = %d\n", n3);

    //#4
//    int array[] = {25, 45, 89, 15, 82}, n;
//    printf("Input the size of the array: ");
//    scanf("%d",&n);
//
//    display_array(array, n);
//
//    sorting_array(array, n);
//
//    printf("\nAfter sorting the array:\n");
//
//    display_array(array, n);
    //#5
    char s[SIZE];
    int size = 0, i = 0;
    printf("Input a string: ");
    fgets(s, sizeof(s), stdin);
    while(*(s+i) != '\0')
    {
        size++;
        i++;
    }
    printf("Reverse of the string is: ");
    size -= 1;
    reversing_str(s, size);

    return 0;
}

int add_two_numbers(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
}
int length_str(char *str)
{
    int cnt = 0;
    while(*str != '\0')
    {
        cnt++;
        str++;
    }
    return cnt;
}
void swapping_pos(int *n1,int *n2,int *n3)
{
    int temp;
    temp = *n1;
    *n1 = *n3;
    *n3 = *n2;
    *n2 = temp;
}
void sorting_array(int *array, int size)
{
    int temp;
    for(int i = 0; i < size - 1; ++i)
    {
        for(int j = i + 1; j < size; ++j)
        {
            if(*(array + i) > *(array + j))
            {
                temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}
void display_array(int *array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("Element #%d: %d\n", i + 1, *(array + i));
    }
}
void reversing_str(char *str, int size)
{
    char temp;
    int p;
    p = size - 1;
    for(int i = 0; i < (size / 2); i++)
    {
        temp = str[i];
        str[i] = str[p];
        str[p] = temp;
        p--;
    }
    for(int i = 0; i < size; i++)
    {
        printf("%c", *(str + i));
    }
}
