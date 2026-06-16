#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int count;
    int maxCount = 0;
    int maxElement;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find frequency
    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d", maxElement);

    return 0;
}