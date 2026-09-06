// floyd's triangle

#include <stdio.h>

int main() {
	int n, k = 1;
	printf("Enter number of lines: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d\t", k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
