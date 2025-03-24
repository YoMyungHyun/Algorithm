#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int C;			
	scanf("%d", &C);	

	for (int i = 0; i < C; i++) {	//입력 받은 C만큼 반복
		int N;				//학생의 수를 받는 변수
		scanf("%d", &N);	

		int arr[1000];		//배열의 크기 선언
		int sum = 0;		//N명의 학생들의 점수의 합 변수
		for (int j = 0; j < N; j++) {	//입력 받은 학생 수 N만큼 반복
			scanf("%d", &arr[j]);	//0부터 N번 학생 수만큼 입력 받은 점수 출력
			sum = sum + arr[j];		//0~N번 배역까지 수의 합
		}
		double avg = (double)sum / N;	//학생들의 점수 평균을 구하는 변수

		int count = 0;		//평균 점수를 넘는 학생 수를 세는 변수
		for (int k = 0; k < N; k++) {		
			if (arr[k] > avg) {		//만약에 학생의 점수가 평균보다 높으면
				count++;			//count가 1씩 증가
			}
		}
		double ratio = (double)count / N * 100;		//평균보다 점수가 높은 학생들의 비율을 구하는 변수임 
		printf("%.3f%%\n", ratio);					//ex)만약 5명의 점수를 받았을 때 평균을 넘는 학생수가 4이게 되면 4/5*100을 하게 되어 80%가 나오는거
	}
	return 0;
}
