// largest among 3 numbers

#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	
	if (a > b) {
		if (a > c)
			printf("%d is largest\n", a);
		else
			printf("%d is largest\n", c);
	}
	else {
		if (b > c)
			printf("%d is largest\n", b);
		else
			printf("%d is largest\n", c);
	}
	return 0;
}					
