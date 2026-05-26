#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int up_down_case(int c);

int main() {
	int c;
	c = getchar();
	printf("%c", up_down_case(c));
	return 0;
}
