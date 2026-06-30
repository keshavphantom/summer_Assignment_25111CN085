#include <stdio.h>

int main()
{
    int bookId[100];
    char bookName[100][50];
    int n, i;

    // Input number of books
    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input details
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);
    }

    // Display books
    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("Book ID : %d\n", bookId[i]);
        printf("Book Name : %s\n\n", bookName[i]);
    }

    return 0;
}