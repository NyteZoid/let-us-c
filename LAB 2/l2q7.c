// signum function

#include <stdio.h>

int main() {
	int x, y;
	printf("Enter the number: ");
	scanf("%d", &x);
	if (x < 0)
		y = -1;
	else if (x > 0)
		y = 1;
	else
		y = 0;
	printf("Y = %d\n", y);
	return 0;
}
