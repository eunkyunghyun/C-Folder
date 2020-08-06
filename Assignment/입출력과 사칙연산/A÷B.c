#include <stdio.h>

int main(void)
{
	float a, b;

	scanf_s("%f %f", &a, &b);
	printf("%f\n", a / b);

	return 0;
}