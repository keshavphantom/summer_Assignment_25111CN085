#include <stdio.h>

int main()
{
    int i, j;

    // Loop for rows
    for(i = 5; i >= 1; i--)
    {
        // Print numbers
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}