#include <stdio.h>

int main(void)
{
	int number;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &number);

	switch (number)
	{
		case 0:
			printf("A\n");
			break;
		case 1:
			printf("B\n");
			break;
		case 2:
			printf("C\n");
			break;
		default:
			printf("D\n");
			break;
	}

	return 0;
}
