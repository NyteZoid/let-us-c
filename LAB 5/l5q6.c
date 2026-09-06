// MARKS

#include <stdio.h>

int main() {
	int marks[100], n, temp;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter marks: ");
		scanf("%d", &marks[i]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (marks[j] < marks[j + 1]) {
				temp = marks[j];
				marks[j] = marks[j + 1];
				marks[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\t", marks[i]);
	}
	return 0;
}
