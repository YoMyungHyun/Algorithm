#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

    B = B + C;

	if (B > 59) {
        A = A + B / 60; // B+C가 60을 넘었으면 60으로 나눈 값을 A에 더해줌
        B = B % 60; // B+C가 60을 넘었으면 %로 나머지 값을 구해줌 ex) 61 % 60 = 1분
	}
    if (A >= 24) {
        A = A % 24; // A의 값이 24를 넘었으면 %로 나머지 값을 구해줌 ex) 25 % 24 = 1
    }

	printf("%d %d", A, B);
	return 0;

}