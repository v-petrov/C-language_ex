#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,rows,cols,sum,i,j,temp;
    printf("Enter the rows of the matrix: ");
        scanf("%d", &rows);
    printf("Enter the cols of the matrix: ");
        scanf("%d", &cols);
    int myMatrix[rows][cols], sumCols[cols];

    printf("\n");
    for(row = 0; row < rows; row++)
    {
        for(col = 0; col < cols; col++)
        {
            printf("Enter the value of the %d row and %d col: ", row + 1, col + 1);
            scanf("%d", &myMatrix[row][col]);
        }
        printf("\n");
    }


    for(row = 0; row < rows; row++)
    {
        printf("The %d row of the matrix is: ", row + 1);
        for(col = 0; col < cols; col++)
        {
            printf("%d ", myMatrix[row][col]);
        }
        printf("\n");
    }
    printf("\nSumming the values of the cols:\n");
    for(col = 0; col < cols ; col++)
    {
        sum = 0;
        for(row = 0; row < rows; row++)
        {
            sum += myMatrix[row][col];
        }
        printf("The sum of the %d col is: %d\n",col + 1, sum);
        sumCols[col] = sum;
    }

    for(i = 0; i < cols; i++)
    {
        for(j = i + 1; j < cols; j++)
        {
            if(sumCols[i] < sumCols[j])
            {
                temp = sumCols[i];
                sumCols[i] = sumCols[j];
                sumCols[j] = temp;
            }
        }
    }
    printf("\nThe sorted sums of the cols are: ");
    for(i = 0; i < cols; i++)
    {
        printf("%d, ", sumCols[i]);
    }
    return 0;
}
