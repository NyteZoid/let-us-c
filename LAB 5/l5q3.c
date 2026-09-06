// primes in array

#include <stdio.h>

int main() {
	int arr[100], n, flag;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element: ");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		flag = 0;
		for (int j = 2; j <= arr[i] / 2; j++) {
			if (arr[i] % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("%d\t", arr[i]);
		}
	}
	return 0;
}
