#include <stdio.h>

int main()
{
    int i, j;

    // Loop for rows
    for(i = 1; i <= 5; i++)
    {
        // Print characters
        for(j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}