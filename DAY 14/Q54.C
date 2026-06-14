#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int key;
    int count = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input target element
    printf("Enter element: ");
    scanf("%d", &key);

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    printf("Frequency = %d", count);

    return 0;
}