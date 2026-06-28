#include <stdio.h>

int main()
{
    int empId;
    char empName[50];
    float salary;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", empName);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    // Display details
    printf("\n----- Employee Record -----\n");
    printf("Employee ID : %d\n", empId);
    printf("Name        : %s\n", empName);
    printf("Salary      : %.2f\n", salary);

    return 0;
}