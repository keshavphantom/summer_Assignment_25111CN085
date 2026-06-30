#include <stdio.h>

int main()
{
    int productId;
    char productName[50];
    int quantity;
    float price;

    // Input product details
    printf("Enter Product ID: ");
    scanf("%d", &productId);

    printf("Enter Product Name: ");
    scanf("%s", productName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    // Display inventory
    printf("\n----- Inventory -----\n");
    printf("Product ID   : %d\n", productId);
    printf("Product Name : %s\n", productName);
    printf("Quantity     : %d\n", quantity);
    printf("Price        : %.2f\n", price);

    return 0;
}