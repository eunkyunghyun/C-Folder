#include <stdio.h>

int main(void)
{
	int i;
	char fruits[3][20];
	
	for (i = 0; i < 3; i++)
	{
		printf("과일 이름을 입력하세요: ", fruits[i]);
		scanf_s("%s", fruits[i]);
	}

	for (i = 1; i <= 3; i++)
		printf("%d번째 과일: %s\n", i, fruits[i-1]);

	return 0;
}
