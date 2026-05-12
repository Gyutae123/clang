#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1;
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (i; i <= n; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1;
	int n;
	int sum = 0;
	scanf("%d", &n);
	do {
		if (i % 2 == 1) {
			sum += i;
		}
		i++;
	} while (i <= n);
	printf("%d", sum);
	return 0;
}