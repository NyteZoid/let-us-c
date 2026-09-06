// tables

#include <stdio.h>

int main() {
	int n, k, prod;
	printf("Enter the number of tables: ");
	scanf("%d", &n);
	printf("Enter the number of terms: ");
	scanf("%d", &k);
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			prod = i * j;
			printf("%d * %d = %d\t", j, i, prod);
		}
		printf("\n");
	}
	return 0;
}
