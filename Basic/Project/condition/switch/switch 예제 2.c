#include <stdio.h>

int main(void)
{
	int grade;

	printf("성적을 입력하세요: ");
	scanf_s("%d", &grade);

	switch (grade / 10)
	{
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
	case 7:
		printf("B\n");
		break;
	default:
		printf("C\n");
		break;
	}

	return 0;
}
