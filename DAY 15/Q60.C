#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int index = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements forward
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with zero
    while(index < n)
    {
        arr[index] = 0;
        index++;
    }

    printf("Array after moving zeroes:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}