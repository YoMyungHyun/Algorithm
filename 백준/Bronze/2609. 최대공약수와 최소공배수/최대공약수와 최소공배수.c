#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {     // 두 수의 최대공약수를 계산하는 함수
    int num = 1;         
    int min;             
    int gcd = 1;          // 최대공약수

    min = a < b ? a : b;    // a와 b 중 작은 값을 min에 저장

    while (num <= min) {
        if (a % num == 0 && b % num == 0) {
            gcd = num;    // a와 b 모두 나누어 떨어지면 gcd 갱신
        }
        num += 1;         // 다음 숫자로 이동
    }

    return gcd;           // 계산된 최대공약수 반환
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n%d\n", gcd(a, b), (a * b) / gcd(a, b));

    return 0;   
}