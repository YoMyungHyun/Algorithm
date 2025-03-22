#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int a = 0;

	scanf("%d", &n);

	while (n >= 0) {		// 0이 될 때까지 while문 실행
		if (n % 5 == 0) {		// 입력된 n의 수가 5로 딱 나누어 떨어지면 실행
			a = a + (n / 5);
			printf("%d", a);
			return 0;
		}
		n = n - 3;				// 입력된 n의 수가 5로 딱 나누어 떨어지지 않으면 실행
		a++;					// a가 하나 증가하고 다시 while문
	}	
	printf("-1");

	return 0;
}
