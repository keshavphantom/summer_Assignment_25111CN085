#include <stdio.h>

// Function to calculate factorial
int factorial(int num)
{
    int i;
    int fact = 1;

    // Calculate factorial
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function
    printf("Factorial = %d", factorial(num));

    return 0;
}