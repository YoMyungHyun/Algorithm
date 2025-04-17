#include <stdio.h>

// n번째 피보나치 수를 계산하는 함수 (반복적 구현)
long fib(int n) {
    if (n < 2)
        return n;           // F(0)=0, F(1)=1
    
    long prev = 0;          // F(0)
    long curr = 1;          // F(1)
    long next;              // 다음 항을 저장할 변수

    // 2부터 n까지 순차적으로 피보나치 수 계산
    for (int i = 2; i <= n; i++) {
        next = prev + curr; // 새 항 = 직전 두 항의 합
        prev = curr;        // prev를 한 칸 앞으로 이동 (F(i-2) ← F(i-1))
        curr = next;        // curr를 새로 계산한 F(i)로 업데이트
    }

    return curr;     // 최종적으로 curr에 F(n)이 저장되어 반환
}

int main(void) {
    int n;
    // 사용자로부터 정수 n 입력 (몇 번째 피보나치 수를 구할지)
    scanf("%d", &n);
    
    printf("%ld\n", fib(n));    // %ld: long 타입 출력 형식 지정자
    return 0;
}
