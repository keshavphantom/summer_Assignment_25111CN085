#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorials are not defined for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i; // multiply fact by every number from 1 to n
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
