#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int cnt = 0;
	int X;

	scanf("%d", &X);

	while (X > 0) {		//X가 0이 될때까지 반복
		if (X % 2 == 1)		//X의 값이 2로 나눴을 때 나머지값이 1이면
			cnt++;		//카운트 + 1 후
			X /= 2;		//X를 2로 나눈다.
	}
	printf("%d", cnt);
	return 0;
}