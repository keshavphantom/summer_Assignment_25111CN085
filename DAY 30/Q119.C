#include <stdio.h>

int main()
{
    int empId[100];
    char empName[100][50];
    float salary[100];
    int n, i;

    // Input number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s", empName[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee details
    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("ID : %d\n", empId[i]);
        printf("Name : %s\n", empName[i]);
        printf("Salary : %.2f\n\n", salary[i]);
    }

    return 0;
}