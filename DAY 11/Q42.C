#include <stdio.h>

// Function to find maximum number
int maximum(int num1, int num2)
{
    // Compare both numbers
    if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int a, b, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Calling function
    max = maximum(a, b);

    printf("Maximum number = %d", max);

    return 0;
}