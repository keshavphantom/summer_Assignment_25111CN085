#include <stdio.h>

// Function to check perfect number
int isPerfect(int num)
{
    int i;
    int sum = 0;

    // Find factors and add them
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    // Compare sum with number
    if(sum == num)
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
    if(isPerfect(num))
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }

    return 0;
}