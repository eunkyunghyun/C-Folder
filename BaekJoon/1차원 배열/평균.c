#include <stdio.h>

int main(void)
{
	int n, m;
	double grade[100] = { 0, };
	double count = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
		scanf_s("%lf", &grade[i]);

	m = grade[0];

	for (int i = 0; i < n; i++)
	{
		if (grade[i] > m)
			m = grade[i];
	}

	for (int i = 0; i < n; i++)
	{
		grade[i] = grade[i] / m * 100;
		count += grade[i];
	}

	count /= n;

	printf("%lf", count);

	return 0;
}
