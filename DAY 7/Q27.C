#include <stdio.h>

// Function to find sum of digits
int sumDigits(int num)
{
    // Base case
    if(num == 0)
    {
        return 0;
    }

    // Recursive call
    return (num % 10) + sumDigits(num / 10);
}

int main()
{
    int num;
    int sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function
    sum = sumDigits(num);

    printf("Sum of digits = %d", sum);

    return 0;
}