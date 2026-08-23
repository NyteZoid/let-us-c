// prime numbers

#include <stdio.h>

int main() {
	int n1, n2, a, i;
	printf("Enter lower limit: ");
	scanf("%d", &n1);
	printf("Enter upper limit: ");
	scanf("%d", &n2);
	while (n1 <= n2) {
		a = 1;
		i = 2;
		while (i <= n1 / 2) {
			if (n1 % i == 0) {
				a = 0;
				break;
			}
			i++;
		}
		if (a == 1)
			printf("%d ", n1);
		n1++;
	}
	return 0;
}
