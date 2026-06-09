#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	for (int i = 1; i <= 5; i++) {
		printf("%d\n", rand() % 100 + 1);
	}
	return 0;
}

