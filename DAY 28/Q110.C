#include <stdio.h>

int main()
{
    int accountNumber;
    char customerName[50];
    float balance;

    // Input account details
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    // Display details
    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", accountNumber);
    printf("Customer Name  : %s\n", customerName);
    printf("Balance        : %.2f\n", balance);

    return 0;
}