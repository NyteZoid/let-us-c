// newton's equation of motion

#include <stdio.h>

int main() {
	float u, t, a, s;
	printf("Enter initial velocity: ");
	scanf("%f", &u);
	printf("Enter time: ");
	scanf("%f", &t);
	printf("Enter acceleration: ");
	scanf("%f", &a);
	s = (u * t) + ((a * t * t) / 2);
	printf("Distance covered is %.2f", s);
	return 0;
}
