#include <stdio.h>

int main()
{
    int i, j;

    // Loop for rows
    for(i = 1; i <= 5; i++)
    {
        // Loop for columns
        for(j = 1; j <= 5; j++)
        {
            // Print stars on boundary
            if(i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("*");
            }
            else
            {
                // Print spaces inside
                printf(" ");
            }
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}