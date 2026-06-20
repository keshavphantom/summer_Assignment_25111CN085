#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols;
    int i, j;
    int sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Row-wise sum
    for(i = 0; i < rows; i++)
    {
        sum = 0;

        for(j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    return 0;
}