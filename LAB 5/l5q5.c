// STUDENTS

#include <stdio.h>

int main() {
	int students[100], n, roll, pos, flag = 0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter roll number: ");
		scanf("%d", &students[i]);
	}
	
	printf("Enter roll number to be searched: ");
	scanf("%d", &roll);
	
	for (int i = 0; i < n; i++) {
		if (students[i] == roll) {
			pos = i;
			flag = 1;
			break;
		}
	}
	
	if (flag == 1) {
		printf("Roll number %d found at position %d", roll, pos + 1);
	}
	else if (flag == 0) {
		printf("Roll number not found");
	}
	return 0;
}
