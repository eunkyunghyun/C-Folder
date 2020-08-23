/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number;
	int attempt = 0;
	int integer = 0;

	srand(time(NULL));

	number = rand();
	
	while (integer != number)
	{
		attempt++;

		printf("정수를 입력하세요: ");
		scanf_s("%d", &integer);

		printf("--------------------\n");

		if (number > integer)
			printf("숫자가 낮습니다.\n");
		else if (number < integer)
			printf("숫자가 높습니다.\n");
	}

	printf("축하합니다. %d번만에 숫자를 맞추셨습니다.", attempt);

	return 0;
}
*/