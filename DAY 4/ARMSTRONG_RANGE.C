#include <stdio.h>

int main()
{
    int start, end, i;
    int temp, rem, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}