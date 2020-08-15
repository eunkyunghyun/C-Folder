#include <stdio.h>

int main(void)
{
	int h, m;
	int sum_h, sum_m;

	scanf_s("%d %d", &h, &m);

	if (h == 0)
		h = 24;

	sum_h = (h * 60 + m - 45) / 60;
	sum_m = (h * 60 + m - 45) % 60;

	printf("%d %d", sum_h, sum_m);

	return 0;
}