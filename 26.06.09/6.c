#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int lot[6];
	for (int i = 0; i < 6; i++) {
		lot[i] = rand() % 45 + 1;
		printf("%d ", lot[i]);
	}
	return 0;
}

