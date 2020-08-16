#include <stdio.h>

int main(void)
{
	int grade;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &grade);

		if (grade < 40)
			grade = 40;

		sum += grade;
	}

	sum /= 5;

	printf("%d", sum);

	return 0;
}
