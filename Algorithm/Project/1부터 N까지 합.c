#include <stdio.h>

int main(void)
{
	int n;
	int i = 0;
	int sum = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &n);

	while (i < n)
	{
		i++;
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
