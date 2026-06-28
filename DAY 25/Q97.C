#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], arr3[100];
    int n1, n2;
    int i, j, k;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input first sorted array
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input second sorted array
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merge arrays
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while(i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged Array:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}