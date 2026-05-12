#include <stdio.h>

int main() {
	int i, j;
	i = 1;

	for (i; i <= 5; i++) {
		j = 1;
		for (j; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}