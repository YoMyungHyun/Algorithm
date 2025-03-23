#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    int H, M;

    scanf("%d %d", &H, &M);
    if (M < 45) {
        M = 60 - (45 - M); // M이 45 미만이면 60에서 수를 뺴야하기 때문에 세운 식
        if (H == 0) { // if 안에 if H가 0이고 M이 44미만이면 H가 23이 되어야함.
            H = 23;
        }
        else {
            H = H - 1; // H가 0이 아니면 그냥 H-1 한다.
        }
    }
    else { // M이 45이상이면 그냥 M-45를 한다.
        M = M - 45;
    }

    printf("%d %d", H, M);

    return 0;
}