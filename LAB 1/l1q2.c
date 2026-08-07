// program to perform basic arithmetic operations

#include <stdio.h>

int main() {
    int num1, num2, sum, diff, prod, quot;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    printf("Sum is: %d\n", sum);
    printf("Difference is: %d\n", diff);
    printf("Product is: %d\n", prod);
    printf("Quotient is: %d\n", quot);
    return 0;
}