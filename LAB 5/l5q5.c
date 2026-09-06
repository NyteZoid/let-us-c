// STUDENTS

#include <stdio.h>

int main() {
	int students[100], n, roll, pos, flag = 0, low, high, mid;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter roll number: ");
		scanf("%d", &students[i]);
	}
	
	printf("Enter roll number to be searched: ");
	scanf("%d", &roll);
	low = 0;
	high = n - 1;
	
	do {
		mid = (low + high) / 2;
		if (roll < students[mid]) {
			high = mid - 1;
		}
		else if (roll > students[mid]) {
			low = mid + 1;
		}
		else {
			pos = mid;
			flag = 1;
			break;
		}
	} while (roll != students[mid] && low <= high);
	
	if (flag == 1) {
		printf("Roll number %d found at position %d", roll, pos + 1);
	}
	else if (flag == 0) {
		printf("Roll number not found");
	}
	return 0;
}
