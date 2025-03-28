#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; i++){    //1부터 입력된 n까지 반복 
        if(n%i == 0){       //1부터 n까지의 수로 입력된 n을 나눴을때 0으로 딱 나누어 떨어지는 수라면
            answer++;       //개수 증가
        }
    }
    return answer;
}