#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num)
{
    int original = num;
    int reverse = 0;
    int rem;

    // Reverse the number
    while(num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    // Compare original and reverse
    if(original == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function
    if(isPalindrome(num))
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}