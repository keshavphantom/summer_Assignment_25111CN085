#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int totalSum = 0;
    int arraySum = 0;
    int missingNumber;

    // Input number of elements
    printf("Enter size of array (excluding missing number): ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum
    totalSum = (n + 1) * (n + 2) / 2;

    // Calculate actual sum
    for(i = 0; i < n; i++)
    {
        arraySum = arraySum + arr[i];
    }

    // Find missing number
    missingNumber = totalSum - arraySum;

    printf("Missing Number = %d", missingNumber);

    return 0;
}