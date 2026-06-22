#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int words = 1;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count spaces
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            words++;
        }

        i++;
    }

    printf("Number of Words = %d", words);

    return 0;
}