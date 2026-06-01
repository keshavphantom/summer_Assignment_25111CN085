#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int r;
    int temp;

    printf("Enter Number : ");
    scanf("%d",&n);

    temp = n;

    while(n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("Sum of digits of %d is %d",temp,sum);

    return 0;
}