#include <stdio.h>

int main(void)
{
	int x, y, z;
	int sum;
	double avg;

	printf("enter three integers: ");
	scanf_s("%d %d %d", &x, &y, &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("sum = %d, average = %lf\n", sum, avg);

	return 0;
}