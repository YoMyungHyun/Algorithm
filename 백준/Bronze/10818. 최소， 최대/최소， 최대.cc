#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(n * sizeof(int)); //메모리 할당 실패하면 프로그램 종료
	if (arr == NULL) {
		return 1;
	}
	for (int i = 0; i < n; i++) {	//n 만큼 반복
		scanf("%d", &arr[i]);	//n개의 수
	}
	int max, min;

	min = max = arr[0];		//배열 첫번째 수로 초기화

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {		//i번째 수가 max보다 크면 그 수가 max
			max = arr[i];
		}if (arr[i] < min) {	//i번째 수가 min보다 작으면 그 수가 min
			min = arr[i];
		}
	}
	printf("%d %d", min, max);
	free(arr);	//malloc으로 할당한 메모리 해제

	return 0;
}