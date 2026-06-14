#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate Elements:\n");

    // Check duplicates
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}