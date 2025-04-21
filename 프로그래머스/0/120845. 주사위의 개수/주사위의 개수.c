#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 0;
    
    //주사위의 최대 개수를 구하기 위해 상자의 가로,세로,높이를 주사위의 모서리 길이로 나누고 곱한다.
    answer = (box[0]/n)*(box[1]/n)*(box[2]/n);
    return answer;
}