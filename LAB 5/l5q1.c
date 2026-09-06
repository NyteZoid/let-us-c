// largest and smallest

#include <stdio.h>

int main() {
	int arr[100], min, max, n;
	printf("Enter number of elements in array: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element");
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("The largest element is %d and the smallest element is %d", max, min);
	return 0;
}
