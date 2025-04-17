#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    long answer = 1;
    int cnt = 1;
    for(int i =share + 1; i<=balls; i++){
        answer *= i;
        answer /= cnt++;
    }
    return (int) answer;
    return answer;
}