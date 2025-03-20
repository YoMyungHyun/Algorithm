#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	double c = (double)a / b;
	printf("%.9f\n", c);

	return 0;
	}