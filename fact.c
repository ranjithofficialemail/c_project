#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    // Ask the user for input
    printf("------------------------------------------------------------------\n");
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }

    return 0;
}

