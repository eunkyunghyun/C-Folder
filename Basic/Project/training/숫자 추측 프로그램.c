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

		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &integer);

		printf("--------------------\n");

		if (number > integer)
			printf("���ڰ� �����ϴ�.\n");
		else if (number < integer)
			printf("���ڰ� �����ϴ�.\n");
	}

	printf("�����մϴ�. %d������ ���ڸ� ���߼̽��ϴ�.", attempt);

	return 0;
}
*/