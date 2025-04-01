#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,a;
	scanf("%d", &n);

	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		return 1;
	}

	int max = arr[0];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	float avg = 0;
	for (int i = 0; i < n; i++) {
		avg += (float)arr[i] / max * 100;
	}
	printf("%f", avg / n);
	free(arr);
	return 0;
}