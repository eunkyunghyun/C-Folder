/* #include <stdio.h>
int fibonaci(int a, int b, int range);

int main(void)
{
	int range;

	printf("수열 범위를 입력하세요: ");
	scanf_s("%d", &range);

	printf("피보나치 수열: ");

	fibonaci(-1, 1, range);

	return 0;
}

int fibonaci(int a, int b, int range)
{
	if (a + b < range)
	{
		printf("%d ", a + b);
		fibonaci(b, a + b, range);
	}

	return 0;
}
*/