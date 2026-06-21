#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int i;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0')
    {
        length++;
    }

    printf("Reversed String: ");

    // Print in reverse order
    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}