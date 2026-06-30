#include <stdio.h>

int main()
{
    char str[100];
    int choice;
    int i = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Display menu
    printf("\n1. Find Length\n");
    printf("2. Display String\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        while(str[i] != '\0')
        {
            i++;
        }

        printf("Length = %d", i);
    }
    else if(choice == 2)
    {
        printf("String = %s", str);
    }
    else
    {
        printf("Invalid Choice.");
    }

    return 0;
}