#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print() {
    int i;
    int j;
    scanf("%d", &i);
    scanf("%d", &j);
    for (; i <= 10; i++) {
        j = j + i;
        printf("The sum(0:%d) = %d\n", i, j);
    }
    
}


int main() {
    print();
    return 0;
}   
