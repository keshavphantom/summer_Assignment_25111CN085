#include <stdio.h>

// Function to calculate sum
int sum(int num1, int num2)
{
    int result;

    // Add both numbers
    result = num1 + num2;

    return result;
}

int main()
{
    int a, b, answer;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Calling function
    answer = sum(a, b);

    printf("Sum = %d", answer);

    return 0;
}