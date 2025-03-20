#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    int Year;

    scanf("%d", &Year);
    if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}