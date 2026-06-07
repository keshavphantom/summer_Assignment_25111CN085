#include <stdio.h>

// Function to find fibonacci term
int fibonacci(int num)
{
    // Base cases
    if(num == 0)
    {
        return 0;
    }

    if(num == 1)
    {
        return 1;
    }

    // Recursive call
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}