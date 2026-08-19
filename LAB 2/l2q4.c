// smallest among 3 numbers

#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	
	if (a < b) {
		if (a < c)
			printf("%d is smallest\n", a);
		else
			printf("%d is smallest\n", c);
	}
	else {
		if (b < c)
			printf("%d is smallest\n", b);
		else
			printf("%d is smallest\n", c);
	}
	return 0;
}					
