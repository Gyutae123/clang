#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSum() {
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("%d", sum);
}


int main() {
    printSum();
    return 0;
}   
