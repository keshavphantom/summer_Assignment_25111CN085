#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int duplicate;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        duplicate = 0;

        // Check previous elements
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}