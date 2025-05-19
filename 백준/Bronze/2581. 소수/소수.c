#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void){
    int M, N;
    scanf("%d\n%d", &M, &N);
 
    int sum=0, min=0;
    for(int i=M; i<=N; i++){
        // i가 소수인지 확인
        for(int j=2; j<i; j++){ // 2는 고려하지 못함
            if(i%j==0){
                break;
            }
            if(j==i-1){
                //i는 소수
                sum+=i;
                if(min==0)
                    min = i;
            }
        }
        if(i==2){
            sum+=i;
            min=i; // 2는 가장 작은 소수
        }
    }
    if(min!=0)
        printf("%d\n%d", sum, min);
    else
        printf("-1");
}