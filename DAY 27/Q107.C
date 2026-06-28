#include <stdio.h>

int main()
{
    float basicSalary;
    float bonus;
    float netSalary;

    // Input salary details
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    // Calculate net salary
    netSalary = basicSalary + bonus;

    // Display salary
    printf("\nNet Salary = %.2f", netSalary);

    return 0;
}