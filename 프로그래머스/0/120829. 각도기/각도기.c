#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = 0;
    if(angle > 0 && angle < 90){    //0도 초과 90도 미만일 때 직각
        answer = 1;
    }else if(angle == 90){  //90도 일 때 직각
        answer = 2;
    }else if(angle > 90 && angle < 180){    //90도 초과 180도 미만 일 때 둔각
        answer = 3;
    }else if(angle == 180){     //180도 일 때 평각
        answer = 4;
    }
       return answer;
}
