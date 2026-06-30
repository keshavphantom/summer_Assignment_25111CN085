#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int choice;
    int sum = 0;

    // Input array
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display menu
    printf("\n1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Maximum\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Array:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if(choice == 2)
    {
        for(i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        printf("Sum = %d", sum);
    }
    else if(choice == 3)
    {
        int max = arr[0];

        for(i = 1; i < n; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }

        printf("Maximum = %d", max);
    }
    else
    {
        printf("Invalid Choice.");
    }

    return 0;
}