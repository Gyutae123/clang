#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int scan() {
    int num;
    scanf("%d", &num);
    return num;
}


int main() {
    int num1 = scan();
    int num2 = scan();

    printf("%d", num1 + num2);
    return 0;
}   
