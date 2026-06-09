#include <stdio.h>

int main()
{
    int i, j;

    // Loop for rows
    for(i = 5; i >= 1; i--)
    {
        // Print stars
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}