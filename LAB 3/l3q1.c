// palindrome

#include <stdio.h>

int main() {
	int num, rev = 0, rem, temp;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp = num;
	while (num > 0) {
		rem = num % 10;
		rev = rem + (rev * 10);
		num /= 10;
	}
	if (rev == temp)
		printf("It is a palindrome\n");
	else
		printf("It is not a palindrome\n");
	return 0;
}
