#include <stdio.h>

int main(void)
{
	int a, b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b / 10) % 10));
	printf("%d\n", a * ((b / 100) % 10));
	printf("%d\n", a * b);

	return 0;
}