#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add() {
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int sum = num1 + num2;
    return sum;
}


int main() {
    printf("%d",add());
    return 0;
}   
