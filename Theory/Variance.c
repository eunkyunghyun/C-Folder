#include <stdio.h>
#define SIZE 10

int main(void)
{
	double arr[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
	double sum = 0.0;
	double avg = 0.0;
	double v = 0.0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}

	avg = sum / SIZE;

	for (int i = 0; i < SIZE; i++)
	{
		v = v + (arr[i] - avg) * (arr[i] - avg);
	}

	printf("%f", v / (SIZE - 1));

	return 0;
}
