#include <stdio.h>

int main()
{
    int choice;
    int amount;
    int balance = 5000;

    // Display menu
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Balance = %d", balance);
    }
    else if(choice == 2)
    {
        printf("Enter amount: ");
        scanf("%d", &amount);

        balance = balance + amount;

        printf("Updated Balance = %d", balance);
    }
    else if(choice == 3)
    {
        printf("Enter amount: ");
        scanf("%d", &amount);

        if(amount <= balance)
        {
            balance = balance - amount;
            printf("Updated Balance = %d", balance);
        }
        else
        {
            printf("Insufficient Balance.");
        }
    }
    else
    {
        printf("Invalid Choice.");
    }

    return 0;
}