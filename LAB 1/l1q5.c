// Compute Interest
#include <stdio.h>
#include <math.h>

int main() {
	float P, N, R, SI, CI;
	printf("Enter principal value: ");
	scanf("%f", &P);
	printf("Enter number of years: ");
	scanf("%f", &N);
	printf("Enter interest rate: ");
	scanf("%f", &R);
	SI = (P * N * R) / 100;
	CI = P * pow((1 + R / 100), N) - P;
	printf("Simple Interest is: %f", SI);
	printf("Compound Interest is: %f", CI);
	return 0;
}
