#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int mul = 1;	//mul을 1로 초기화

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {		//입력 받은 정수만큼 반복, 대신 n!을 만족하기 위해선 1부터 n만큼의 정수까지 해야함
		mul = mul * i;		//mul을 1로 초기화해서 n까지의 곱을 구하는 변수
	}
	printf("%d", mul);
	return 0;
}
