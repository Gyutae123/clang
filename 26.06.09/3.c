    #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int key, i;
	int N;
	printf("Input size of the list : ");
	scanf("%d", &N);
	int list[N];
	printf("Input %d values of the list : ", N);
	for (int j = 0; j < N; j++) {
		int num = 0;
		scanf("%d", &num);
		list[j] = num;
	}
	for (i = 0; i < N; i++) {
		printf("%d ", list[i]);
	}
	printf("\nInput a key value : ");
	scanf("%d", &key);
	for (i = 0; i < N; i++) {
		if (list[i] == key) {
			printf("Find the key at %d of the list array\n", i + 1);

		}

	}
	printf("End\n");
	return 0;
}
