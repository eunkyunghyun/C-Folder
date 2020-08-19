#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int sum1, sum2;
	int count = 0;
	char arr[101];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum1 = 0;
		sum2 = 0;

		sprintf(arr, "%d", i);

		if (strlen(arr) == 2)
			count++;
		else if (strlen(arr) == 3)
		{
			sum1 = (arr[0] - '0') + (arr[1] - '0'); // 101, 111, 121 등의 경우
			sum2 = (arr[1] - '0') + (arr[2] - '0');
			if (sum1 == sum2)
				count++;
			else if ((arr[1] - '0') == 0)
				count++;
			else
			{
				sum1 = (arr[1] - '0') - (arr[0] - '0'); // 369, 456, 567 등의 경우
				sum2 = (arr[2] - '0') - (arr[1] - '0');
				if (sum1 == sum2)
					count++;
				else
				{
					sum1 = (arr[0] - '0') - (arr[1] - '0'); // 321, 432, 531 등의 경우
					sum2 = (arr[1] - '0') - (arr[0] - '0');
					if (sum1 == sum2)
						count++;
				}
			}
		}
	}

	printf("%d\n", count);

	return 0;
}
