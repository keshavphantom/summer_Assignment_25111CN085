#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n;
    int i, j;
    int sum = 0;

    // Input order of square matrix
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    // Input matrix
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sum
    for(i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
    }

    printf("Diagonal Sum = %d", sum);

    return 0;
}