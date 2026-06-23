#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    int found = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find first repeating character
    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("First Repeating Character = %c", str[i]);
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break;
        }
    }

    return 0;
}