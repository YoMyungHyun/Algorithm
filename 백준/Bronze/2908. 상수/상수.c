#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;				//정수 2개 받기
	int rev1 = 0, rev2 = 0;		//받은 정수를 거꾸로 출력하는 변수
	scanf("%d %d", &a, &b);

	while (a > 0) {			//입력 받은 a보다 작을 때 까지 반복
		rev1 = (rev1 * 10) + (a % 10);	//1의 자리 수를 거꾸로 100의 자리 수로 바꾸기 위한 변수 
		a = a / 10;			//입력받은 a의 1의 자리 숫자를 구했으면 다음 10의 자리 숫자를 구하기 위해 10으로 나눠주고 반복문을 통해 10의 자리 숫자를 구한다.
	}
	while (b > 0) {			
		rev2 = (rev2 * 10) + (b % 10);
		b = b / 10;
	}
	if (rev1 > rev2) {		//만약 자릿수가 바뀐 rev1과 rev2중에 rev1이 크다면 rev1 출력
		printf("%d", rev1);
	}
	else {					//rev2가 크다면 rev2 출력
		printf("%d", rev2);
	}
	return 0;
}
