#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;
    printf("Enter your dan : ");
    scanf("%d", &i);
    while (i <= 9) {
        j = 1;
        while (j <= 9) {
            printf("%d * %d = %d \n", i, j, i * j);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;
    printf("Enter your dan : ");
    scanf("%d", &i);
    for(i; i <= 9; i++){
        j = 1;
        for (j; j <= 9; j++) {
            printf("%d * %d = %d \n", i, j, i * j);
            
        }
        
        printf("\n");
    }
    return 0;
}
