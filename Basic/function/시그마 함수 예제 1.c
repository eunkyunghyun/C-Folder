#include <stdio.h>

void sigma(int n)
{
	double cal;
	double sum = 0;

	for (int i = 1; i < n + 1; i++)
	{
		cal = ((1 / (double)i) * (1 / (double)i)) + (1 / (double)i) + 1;
		sum += cal;
	}

	printf("%lf", sum);
}

int main(void)
{
	void (*f)(int);
	int n;

	f = sigma;

	printf("수열을 입력하세요: ");
	scanf_s("%d", &n);

	f(n);

	return 0;
}
