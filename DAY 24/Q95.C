#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char longest[100];
    char current[100];

    int i = 0;
    int j = 0;
    int maxLength = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            current[j] = str[i];
            j++;
        }
        else
        {
            current[j] = '\0';

            if(strlen(current) > maxLength)
            {
                maxLength = strlen(current);
                strcpy(longest, current);
            }

            j = 0;
        }

        i++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}