#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


    int num;
    printf("Enter lotto set number : ");
    scanf("%d", &num);

    int lot[999][6]; // vs컴파일러에서 [][6]이 되지않아 999로 입력했습니다.


    for (int i = 0; i < num; i++) {
        for (int j = 0; j < 6; j++) {
            
            lot[i][j] = rand() % 45 + 1;

            for (int k = 0; k < j; k++) {
                if (lot[i][j] == lot[i][k]) {
                    lot[i][j]--;
                }
            }
        }
    }

    for (int i = 0; i < num; i++) {
        printf("set %d: ", i + 1);
        for (int j = 0; j < 6; j++) {
            printf("%d ", lot[i][j]);
        }
        printf("\n");
    }



    return 0;
}

