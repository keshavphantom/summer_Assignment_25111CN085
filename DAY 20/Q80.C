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

    // Column-wise sum
    for(j = 0; j < cols; j++)
    {
        sum = 0;

        for(i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}