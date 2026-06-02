#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int arr[3][3];
	int count = 1;
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			arr[i][j] = count;
			count++;
			printf("%d ", arr[i][j]);
			sum += arr[i][j];
		}
		printf("%d", sum);
		printf("\n");
	}

	
	return 0;
}
