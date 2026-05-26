#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>


int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (islower(c)) {
			c = toupper(c);
		}
		else if(isupper(c)) {
			c = tolower(c);
		}
		printf("%c\n", c);
	}
	return 0;
}
