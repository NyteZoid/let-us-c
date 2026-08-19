// newton's equation of motion

#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	c = (a * a) + (2 * a * b) + (b * b);
	printf("Answer is %d", c);
	return 0;
}
