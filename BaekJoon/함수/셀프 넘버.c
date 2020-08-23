#include <stdio.h>
#include <string.h>

int main(void)
{
	int flag;
	int sum;
	char num[10001];

	for (int i = 1; i <= 10000; i++)
	{
		flag = 0;
		for (int j = 1; j < i; j++)
		{
			sprintf(num, "%d", j);
			sum = j;
			for (int n = 0; n < strlen(num); n++)
				sum = sum + (num[n] - '0');

			if (sum == i)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d\n", i);
	}

	return 0;
}
