#include <stdio.h>

int main()
{
    int choice;
    float num1, num2;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);

    // Display menu
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform operation
    if(choice == 1)
    {
        printf("Result = %.2f", num1 + num2);
    }
    else if(choice == 2)
    {
        printf("Result = %.2f", num1 - num2);
    }
    else if(choice == 3)
    {
        printf("Result = %.2f", num1 * num2);
    }
    else if(choice == 4)
    {
        if(num2 != 0)
        {
            printf("Result = %.2f", num1 / num2);
        }
        else
        {
            printf("Division by zero is not possible.");
        }
    }
    else
    {
        printf("Invalid Choice.");
    }

    return 0;
}