#include <stdio.h>

int main(void)
{
	int n = 0;
	int min;
	int price;
	int prices[6];
	int burger[3];
	int drink[2];

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &price);
		burger[i] = price;
	}

	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &price);
		drink[i] = price;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			prices[n] = (burger[i] + drink[j]) - 50;
			n++;
		}
	}

	min = prices[0];

	for (int i = 1; i < 6; i++)
	{
		if (min > prices[i])
			min = prices[i];
	}

	printf("%d", min);

	return 0;
}
