// delete from array

#include <stdio.h>

int main() {

	int arr[100], n, ele, pos;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element: ");
		scanf("%d", &arr[i]);
	}
	printf("Enter element to be deleted: ");
	scanf("%d", &ele);
	
	for (int i = 0; i < n; i++) {
		if (arr[i] == ele) {
			pos = i;
			break;
		}
	}
	
	for (int i = pos; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	n = n - 1;
	for (int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
	
}
