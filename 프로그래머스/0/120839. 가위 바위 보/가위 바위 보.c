#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.    
    char* solution(const char* rsp) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(rsp));
    for(int i = 0; i< strlen(rsp); i++) {
        if(rsp[i] == '2') {     //가위 2일 때
            answer[i] = '0';        //0 출력
        }  else if(rsp[i] == '0') {     //바위 0일 때
            answer[i] = '5';        //5 출력
        } else {        //보 5일 때
            answer[i] = '2';        //2 출력
        }
    }
    answer[strlen(rsp)] = NULL;
    
    return answer;
}