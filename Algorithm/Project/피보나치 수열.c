/* #include <stdio.h>
int fibonacci(int a, int b, int range);

int main(void)
{
	int range;
	
	printf("피보나치 수열 출력 범위를 입력하세요: ");
	scanf_s("%d", &range);

	printf("피보나치 수열: ");
	
	if (range > 0)
		fibonacci(-1, 1, range);
	else
		printf("없음");
}

int fibonacci(int a, int b, int range)
{
	if (a + b < range)
	{
		printf("%d ", a + b);
		fibonacci(b, a + b, range);
	}
}
*/
