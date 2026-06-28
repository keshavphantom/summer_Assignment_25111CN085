#include <stdio.h>

int main()
{
    int rollNo;
    char name[50];
    float marks;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Display student details
    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    return 0;
}