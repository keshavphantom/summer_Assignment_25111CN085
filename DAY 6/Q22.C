#include <stdio.h>

int main()
{
    int binary;
    int decimal = 0;
    int rem;
    int power = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary > 0)
    {
        rem = binary % 10;

        decimal = decimal + rem * power;

        power = power * 2;

        binary = binary / 10;
    }

    printf("Decimal number = %d", decimal);

    return 0;
}