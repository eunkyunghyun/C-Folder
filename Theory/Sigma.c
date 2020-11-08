#include <stdio.h>
#include <math.h>

int main(void)
{
	double sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum += sqrt(i);
	}

	printf("%f", sum);

	return 0;
}
