#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0;
    int count = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input character
    printf("Enter character to search: ");
    scanf(" %c", &ch);

    // Count frequency
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("Frequency = %d", count);

    return 0;
}