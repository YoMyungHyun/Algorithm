#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++){    //입력된 n만큼 반복
        if(i % 2 == 0){     //1부터 n까지 반복된 수를 2로 나누었을 때 나머지값이
            answer += i;    //if문에 만족하면 i 추가
        }
    }
    return answer;
}