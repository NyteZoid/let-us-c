// prime and composite

#include <stdio.h>

int main() {
	int n, a, i, p = 0, c = 0;
	do {
		printf("Enter -1 to exit. Enter any number: ");
		scanf("%d", &n);
		a = 1;
		i = 2;
		while (i <= n / 2) {
			if (n % i == 0) {
				a = 0;
				break;
			}
			i++;
		}
		if (a == 1) 
			p += 1;
		else
			c += 1;
	} while (n != -1);
	printf("You have entered %d prime numbers and %d composite numbers", p, c);
	return 0;
} 
