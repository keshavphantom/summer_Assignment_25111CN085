#include <stdio.h>

int main()
{
    char passengerName[50];
    int age;
    char destination[50];

    // Input passenger details
    printf("Enter Passenger Name: ");
    scanf("%s", passengerName);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Destination: ");
    scanf("%s", destination);

    // Display ticket
    printf("\n----- Ticket -----\n");
    printf("Passenger : %s\n", passengerName);
    printf("Age        : %d\n", age);
    printf("Destination: %s\n", destination);

    return 0;
}