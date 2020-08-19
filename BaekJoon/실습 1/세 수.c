#include <stdio.h>

int main(void)
{
	int m, n;
	int a, b, c;
	int arr[3];

	scanf_s("%d %d %d", &a, &b, &c);

	arr[0] = a;
	arr[1] = b;
	arr[2] = c;

	m = a;

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] < m)
			m = arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] != 0)
			n = arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] < n && arr[i] != m)
			n = arr[i];
	}

	printf("%d\n", n);

	return 0;
}
