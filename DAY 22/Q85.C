#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int i;
    int palindrome = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0')
    {
        length++;
    }

    // Compare characters
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
    {
        printf("Palindrome String");
    }
    else
    {
        printf("Not a Palindrome String");
    }

    return 0;
}