#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int sum = 0;
    float average;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}