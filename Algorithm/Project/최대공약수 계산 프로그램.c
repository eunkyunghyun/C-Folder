/* #include <stdio.h>

int main(void)
{
	int x, y, sum, common_factor;
	
	printf("큰 수와 작은 수를 차례대로 입력하세요: ");
	scanf_s("%d %d", &x, &y);

	while (1)
	{
		if (y == 0)
		{
			common_factor = x;
			break;
		}

		sum = x % y;
		x = y;
		y = sum;
	}

	printf("최대공약수는 %d입니다.\n", common_factor);

	return 0;
}
*/