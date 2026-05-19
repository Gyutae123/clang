#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int i, int *j) {
    *j = *j + i;
    printf("The sum(0:%d) = %d\n", i, *j);
}



int main() {
    int i, j;
    for (i = 0, j = 0; i <= 10; i++) {
        print(i, &j);
    }
    return 0;
}   
