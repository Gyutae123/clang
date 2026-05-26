#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_header.h"

int main() {
	int c;
	c = getchar();
	printf("%c", up_down_case(c));
	return 0;
}
