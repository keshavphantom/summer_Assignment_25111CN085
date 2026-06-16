#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int target;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input target sum
    printf("Enter target sum: ");
    scanf("%d", &target);

    // Find pair
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("Pair Found: %d and %d", arr[i], arr[j]);
            }
        }
    }

    return 0;
}