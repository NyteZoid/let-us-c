// days to ywd

#include <stdio.h>

int main() {
	int h, m, s;
	printf("Enter number of seconds: ");
	scanf("%d", &s);
	h = s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;
	printf("%d hours, %d mins, and %d secs", h, m, s);
	return 0;
}
