#include <stdio.h>

int main(void)
{
	float score;

	printf("점수를 입력하세요: ");
	scanf_s("%f", &score);

	if (score > 90 && score <= 100)
		printf("A");
	else if (score > 80 && score <= 90)
		printf("B");
	else if (score > 70 && score <= 80)
		printf("C");
	else if (score > 60 && score <= 70)
		printf("D");
	else if (score > 50 && score <= 60)
		printf("E");
	else
		printf("F");

	return 0;
}
