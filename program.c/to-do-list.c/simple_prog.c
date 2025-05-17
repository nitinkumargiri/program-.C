#include <stdio.h>

int main() {
    int a, b, sum;

    // Ask the user for two integers
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Calculate the sum
    sum = a + b;

    // Print the result
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}