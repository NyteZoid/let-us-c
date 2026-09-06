// bubble sort

#include <stdio.h>

int main() {

	int arr[100], n, temp;
	char ord;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element: ");
		scanf("%d", &arr[i]);
	}
	printf("Enter a for ascending order, d for descending order: ");
	scanf(" %c", &ord);
	
	switch (ord) {
		case 'a':
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n - i - 1; j++) {
					if (arr[j] > arr[j + 1]) {
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}
			break;
		case 'd':
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n - i - 1; j++) {
					if (arr[j] < arr[j + 1]) {
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}
			break;
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}
