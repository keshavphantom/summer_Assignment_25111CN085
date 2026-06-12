#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int num)
{
    int original = num;
    int rem;
    int sum = 0;

    // Find sum of cubes
    while(num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    // Compare sum with original number
    if(sum == original)
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
    if(isArmstrong(num))
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}