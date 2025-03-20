#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c, mul, index;   // a, b, c: 입력받을 정수; mul: 곱셈 결과; index: 자릿수 저장용 변수
    int arr[10] = { 0 };         // 0~9까지 숫자의 빈도수를 저장할 배열, 모든 원소를 0으로 초기화

    scanf("%d %d %d", &a, &b, &c); // 사용자로부터 세 개의 정수 입력받음
    mul = a * b * c;              

    while (mul > 0) {             // 곱이 0보다 클 동안 반복
        index = mul % 10;         // 현재 자릿수 추출 (일의 자리)
        arr[index] += 1;          // 해당 숫자의 등장 횟수 1 증가
        mul = mul / 10;           // 다음 자릿수를 위해 현재 자릿수를 제거
    }

    for (int i = 0; i < 10; i++)  // 0부터 9까지 각 숫자의 빈도수 출력
        printf("%d\n", arr[i]);   // 각 숫자의 빈도수를 한 줄씩 출력

    return 0;                 
}
