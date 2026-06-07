#include <stdio.h>

// Function to reverse number
void reverseNumber(int num)
{
    // Base case
    if(num == 0)
    {
        return;
    }

    // Print last digit
    printf("%d", num % 10);

    // Recursive call
    reverseNumber(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = ");

    // Calling function
    reverseNumber(num);

    return 0;
}