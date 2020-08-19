#include <stdio.h>

int main(void)
{
	int germ;
	int time = 0;
	
	printf("세균의 수를 입력하세요: ");
	scanf_s("%d", &germ);

	while (time <= 7)
	{
		germ *= 4;
		time++;
	}

	printf("%d\n", germ);

	return 0;
}
