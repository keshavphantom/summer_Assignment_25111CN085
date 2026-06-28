#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total
    total = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = total / 5;

    printf("\nTotal = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);

    // Decide grade
    if(percentage >= 90)
    {
        printf("Grade = A");
    }
    else if(percentage >= 75)
    {
        printf("Grade = B");
    }
    else if(percentage >= 60)
    {
        printf("Grade = C");
    }
    else if(percentage >= 40)
    {
        printf("Grade = D");
    }
    else
    {
        printf("Grade = Fail");
    }

    return 0;
}