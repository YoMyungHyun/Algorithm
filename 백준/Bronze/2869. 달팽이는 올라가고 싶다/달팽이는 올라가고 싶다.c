#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, V;		
	int day = 0;		//총 몇일 걸리는지 출력하는 변수

	scanf("%d %d %d", &A, &B, &V);		

	day = (V - B) / (A - B);		//달팽이가 나무 막대를 모두 올라가면 미끄러지지 않기에 총 올라가야 하는 일수는 (V - B)이며,
									//달팽이가 하루(낮 과 밤)에 올라가는 높이는 (A  -B)이다.
	if ((V - B) % (A - B) != 0) {		//그런데 만약 (V - B) / (A - B)가 0으로 딱 나누어 떨어지지 않으면 소수점으로 결과값이 나오지만 int 이기 때문에 2.5여도 2가 추출된다.
		day = (V - B) / (A - B) + 1;	//그래서 (V - B) / (A - B)가 0으로 딱 나누어 떨어지지 않으면 (V - B) / (A - B)를 계산 후 +1을 해준다.
	}
	printf("%d", day);

	return 0;
}
