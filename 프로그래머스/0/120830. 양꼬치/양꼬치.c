#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = (12000 * n) + (2000 * k); //양꼬치의 개수와 음료수의 개수를 통해 총얼마인지 출력 변수
    int a = 2000 * (n / 10);    //꼬치 10개마다 음료수 1개의 값을 빼는 변수
    answer = answer - a; 
    
    return answer;
}