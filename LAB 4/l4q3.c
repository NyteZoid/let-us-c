// sine series

#include <stdio.h>
#define pi 3.141592

int main() {
	int n;
	float x, term, sum;
	printf("Enter angle in degrees: ");
	scanf("%f", &x);
	printf("Enter number of terms: ");
	scanf("%d", &n);
	x *= (pi/180.0);
	term = x;
	sum = x;
	for (int i = 1; i < n; i++) {
		term *= (((-1) * x * x) / (2 * i * ((2 * i) + 1)));
		sum += term;
	}
	printf("The sine series for %f radians angle upto %d terms evaluates to %f", x, n, sum);
	return 0;
}
