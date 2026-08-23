// strong number

#include <stdio.h>

int main() {
	int n, temp, rem, sum = 0, fact, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp = n;
	while (n > 0) {
		rem = n % 10;
		i = 2;
		fact = 1;
		while (i <= rem)  {
			fact = fact * i;
			i++;
		}
		sum += fact;
		n /= 10;
	}
	if (sum == temp) 
		printf("Strong Number");
	else
		printf("Not Strong Number");
	return 0;
}
