// money in piggy bank

#include <stdio.h>

int main() {
	int r20 = 13, r10 = 11, r5 = 7, p50 = 13;
	float money;
	money = (r20 * 20) + (r10 * 10) + (r5 * 5) + (0.5 * p50);
	printf("Total money in the piggy bank is: %f", money);
	return 0;
}
