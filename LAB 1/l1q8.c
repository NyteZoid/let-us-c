// 4 operations
#include <stdio.h>

int main()
{
	int a = 30, b = 10, c = 5, d = 15, op1, op2, op3, op4;
	op1 = (a + b) * c / d;
	op2 = ((a + b) * c) / d;
	op3 = a + (b * c) / d;
	op4 = (a + b) * (c / d);
	printf("The answers are %d, %d, %d, %d", op1, op2, op3, op4);
}
