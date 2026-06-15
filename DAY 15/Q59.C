#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int last;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store last element
    last = arr[n - 1];

    // Shift elements right
    for(i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Place last element at beginning
    arr[0] = last;

    printf("Array after right rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}