#include <stdio.h>

int main()
{
    int age;

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if(age >= 18)
    {
        printf("You are Eligible to Vote.");
    }
    else
    {
        printf("You are Not Eligible to Vote.");
    }

    return 0;
}