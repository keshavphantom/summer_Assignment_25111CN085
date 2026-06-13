#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, smallest;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Compare elements
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}