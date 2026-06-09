#include <stdio.h>

int main()
{
    int i, j;

    // Loop for rows
    for(i = 1; i <= 5; i++)
    {
        // Print character multiple times
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + i - 1);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}