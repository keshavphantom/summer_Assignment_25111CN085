#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int evenCount = 0;
    int oddCount = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Even Elements = %d\n", evenCount);
    printf("Odd Elements = %d", oddCount);

    return 0;
}