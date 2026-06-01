#include <stdio.h>

int main()
{
    int n;
    int rev = 0;
    int r;

    printf("Enter Number : ");
    scanf("%d",&n);

    while(n > 0)
    {
        r = n % 10;
        rev = rev * 10;
        rev = rev + r;
        n = n / 10;
    }

    printf("Reverse Number = %d",rev);

    return 0;
}