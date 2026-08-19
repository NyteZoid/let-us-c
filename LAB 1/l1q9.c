// days to ywd

#include <stdio.h>

int main() {
	int y, w, d;
	printf("Enter number of days: ");
	scanf("%d", &d);
	y = d / 365;
	d %= 365;
	w = d / 7;
	d %= 7;
	printf("%d years, %d weeks, and %d days", y, w, d);
	return 0;
}
