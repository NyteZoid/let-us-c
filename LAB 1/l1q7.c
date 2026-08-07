// Fahrenheit to Celsius
#include <stdio.h>

int main()
{
    int fahrenheit, celsius;
    printf("Enter temperature in fahrenheit: \n");
    scanf("%d", &fahrenheit);
    celsius = (5 * (fahrenheit - 32)) / 9;
    printf("%d fahrenheit is equal to %d celsius \n", fahrenheit, celsius);
    return 0;
}
