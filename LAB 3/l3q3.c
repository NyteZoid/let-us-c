// armstrong number

#include <stdio.h>

int main() {
	int n, temp, arm = 0, rem;
	printf("Enter the number: ");
	scanf("%d", &n);
	temp = n;
	while (n > 0) {
		rem = n % 10;
		arm += rem * rem * rem;
		n /= 10;
	}
	if (arm == temp) 
		printf("Armstrong Number");
	else
		printf("Not Armstrong Number");
	return 0;
}
