#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols;
    int i, j;

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

    printf("Transpose Matrix:\n");

    // Print transpose
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}