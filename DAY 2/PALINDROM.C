#include <stdio.h>

int main()
{
    int n;
    int rev = 0;
    int r;
    int original;

    printf("Enter Number : ");
    scanf("%d",&n);

    original = n;

    while(n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if(original == rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }

    return 0;
}