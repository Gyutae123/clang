#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}

}

int main() {
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	int result = max(a, b);

	printf("%d", result);
;
	return 0;
}
