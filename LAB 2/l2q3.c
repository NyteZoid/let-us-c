// solve quadratic equation

#include <stdio.h>
#include <math.h>

int main() {
	int z;
	float a, b, c,root1, root2, re, im, disc;
	printf("Enter coefficient of x^2: ");
	scanf("%f", &a);
	printf("Enter coefficient of x: ");
	scanf("%f", &b);
	printf("Enter constant: ");
	scanf("%f", &c);
	
	disc = (b * b) - (4 * a * c);
	
	if (disc < 0)
		z = 1;
	else if (disc == 0)
		z = 2;
	else
		z = 3;
		
	switch (z) {
		case 1:
			re = -b / (2 * a);
			im = sqrt(fabs(disc)) / (2 * a);
			printf("Imaginary roots: %.2f + %.2fi and %.2f - %.2fi", re, im, re, im);
			break;
		case 2:
			root1 = -(b / (2 * a));
			printf("Real and Unique root: %.2f", root1);
			break;
		case 3:
			root1 = (-b + sqrt(disc)) / (2 * a);
			root2 = (-b - sqrt(disc)) / (2 * a);
			printf("Real and distinct roots: %.2f and %.2f", root1, root2);
			break;
	}
	return 0;
}
