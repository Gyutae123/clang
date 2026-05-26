#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int up_down_case(int c) {
	
		if (islower(c)) {
			c = toupper(c);
		}
		else if (isupper(c)) {
			c = tolower(c);
		}
		return c;
	
}

int main() {
	int c;
	c = getchar();
	printf("%c", up_down_case(c));
	return 0;
}
