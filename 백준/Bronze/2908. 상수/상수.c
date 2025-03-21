#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	int rev1 = 0, rev2 = 0;
	scanf("%d %d", &a, &b);

	while (a > 0) {
		rev1 = (rev1 * 10) + (a % 10);
		a = a / 10;
	}
	while (b > 0) {
		rev2 = (rev2 * 10) + (b % 10);
		b = b / 10;
	}
	if (rev1 > rev2) {
		printf("%d", rev1);
	}
	else {
		printf("%d", rev2);
	}
	return 0;
}
