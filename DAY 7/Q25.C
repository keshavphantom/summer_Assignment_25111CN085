#include <stdio.h>

// Function to find factorial using recursion
int factorial(int num)
{
    // Base case
    if(num == 0 || num == 1)
    {
        return 1;
    }

    // Recursive call
    return num * factorial(num - 1);
}

int main()
{
    int num;
    int answer;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling factorial function
    answer = factorial(num);

    printf("Factorial = %d", answer);

    return 0;
}