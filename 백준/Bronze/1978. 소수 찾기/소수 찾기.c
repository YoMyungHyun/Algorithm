#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;						//입력받을 정수의 개수 n
	int a;						//n개 만큼 입력받은 정수들
	int count = 0;				//소수 조건에 맞을 때 소수의 개수를 세는 변수를 초기화
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {	//n번 만큼 반복
		scanf("%d", &a);			//n개 만큼 입력 받을 정수 입력
		for (int j = 2; j <= a; j++) {	//소수이기 위해선 1이 아닌 2부터 반복하여 소수 찾기 (소수는 1과 자신만의 약수를 가지는것)
			if (a == j) 			//입력받은 정수가 반복된 j와 같다면 1과 자기 자신이기 때문에 소수이다. 
				count++;			//소수 일 때 개수 증가
			if (a % j == 0) 	//만약 2부터 반복문이 진행될 때 중간에 j로 나눈 a가 딱 나누어 떨어진다면 1과 자기자신만을 가진 것이 아닌 다른 정수가 있기에 소수가 아님
				break;			//더 이상 검사할 필요 없어서 내부 반복문 종료
		}
	}printf("%d", count);
	return 0;
}