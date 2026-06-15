#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int first;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store first element
    first = arr[0];

    // Shift elements left
    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Place first element at end
    arr[n - 1] = first;

    printf("Array after left rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}