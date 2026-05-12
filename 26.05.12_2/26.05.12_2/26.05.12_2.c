#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1;
	int n;
	int sum = 0;
	scanf("%d", &n);
	while (i <= n) {
		if (i % 2 == 1) {
			sum += i;
		}
		i++;
	}
	printf("%d", sum);
	return 0;
}