#include <stdio.h>

// Function to print Fibonacci series
void fibonacci(int n)
{
    int first = 0;
    int second = 1;
    int next;
    int i;

    printf("%d %d ", first, second);

    // Generate remaining terms
    for(i = 3; i <= n; i++)
    {
        next = first + second;

        printf("%d ", next);

        first = second;
        second = next;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calling function
    fibonacci(n);

    return 0;
}