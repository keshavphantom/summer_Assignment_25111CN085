#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    char temp[200];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Join first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check rotation
    if(strstr(temp, str2) != NULL)
    {
        printf("Rotation String");
    }
    else
    {
        printf("Not Rotation String");
    }

    return 0;
}
