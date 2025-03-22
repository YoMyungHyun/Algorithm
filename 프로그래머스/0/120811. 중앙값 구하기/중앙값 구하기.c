#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    qsort(array,array_len,sizeof(int),cmp);

    int answer = array[array_len / 2];
    return answer;
}
