#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Count characters
    while(str[length] != '\0')
    {
        length++;
    }

    printf("Length = %d", length);

    return 0;
}