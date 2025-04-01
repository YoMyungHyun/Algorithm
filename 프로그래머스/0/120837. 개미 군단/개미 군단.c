#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    int i = hp / 5;     //장군개미의 최소 병력 수 구하기
    int j = (hp % 5) / 3;       //장군개미 최소 병력 외 병정개미 수 구하기
    int k = (hp % 5) % 3;       //장군개미 최소 병력을 구한 후 3으로 나눴을 때 나머지(일개미)의 수 구하기
    answer = i + j + k;
    return answer;
}
