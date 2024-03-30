#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Print the result
        printf("The factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}