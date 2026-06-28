#include <stdio.h>

int main()
{
    char name[50];
    long long phoneNumber;

    // Input contact details
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%lld", &phoneNumber);

    // Display contact
    printf("\n----- Contact Details -----\n");
    printf("Name         : %s\n", name);
    printf("Phone Number : %lld\n", phoneNumber);

    return 0;
}