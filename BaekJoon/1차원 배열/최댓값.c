#include <stdio.h>

int main(void)
{
	int max;
	int index;
	int num[9];

	for (int i = 0; i < 9; i++)
		scanf_s("%d", &num[i]);

	max = num[0];

	for (int i = 0; i < 9; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			index = i;
		}
	}

	printf("%d\n", max);
	printf("%d\n", index + 1);

	return 0;
}