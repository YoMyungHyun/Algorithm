#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);  //문자열길이
    int j =0;
    char* answer = (char*)malloc(len -1);      //할당길이
    for(int i =0; i<len; i++){      //문자열 길이만큼 반복
        if(my_string[i] != letter[0])       //입력받은 문자열 문자가 letter 문자와 같지 않다면 문자 추가
            answer[j++] = my_string[i];     
    }
    answer[j] = NULL;
    return answer;
}