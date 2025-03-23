#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i =1; i<= 6*n; i++){ //6조각을 n이 나눠먹기 위해서 
        if(6 * i % n == 0){ // 6*i가 n으로 나눴을때 0으로 딱 떨어지면 모두 같은양을 먹은것
            answer = i;
            break;
        }
    }
    return answer;
}