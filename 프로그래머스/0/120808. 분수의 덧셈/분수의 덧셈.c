#include <stdio.h>   
#include <stdbool.h> 
#include <stdlib.h>  

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a; // b가 0이 될 때까지 재귀 호출, 마지막에 a가 최대공약수가 됨
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // 두 분수를 덧셈: (a/b) + (c/d) = (a*d + c*b) / (b*d)
    int num = numer1 * denom2 + numer2 * denom1;  // 분자 계산
    int den = denom1 * denom2;                     // 분모 계산

    // 계산된 분수의 기약분수화를 위해 최대공약수를 구함
    int g = gcd(num, den);               // 분자와 분모의 최대공약수

    int* answer = malloc(2 * sizeof(int));
    answer[0] = num / g;     // 최대공약수로 나누어 기약분수의 분자 저장
    answer[1] = den / g;     // 최대공약수로 나누어 기약분수의 분모 저장

    return answer;
}
