#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0; //리턴 결과값
    int freq = 1; //값이 같으면 ++ 하는 변수
    int mode = 1; //최빈값 변수
    
    if(array_len == 1){
        return answer = array[0];
    }
    for(int i = 0; i<array_len-1; i++){
        freq = 1;
        for(int j = i +1; j<array_len; j++){
            if(array[i] == array[j]) freq++;
            if(freq > mode){
                mode = freq;
                answer = array[i];
            }else if(freq == mode && answer != array[i]){
                answer = -1;
            }
        }
    }
    return answer;
}