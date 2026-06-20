#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n;
    int i, j;
    int symmetric = 1;

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

    // Check symmetry
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Not Symmetric Matrix");
    }

    return 0;
}