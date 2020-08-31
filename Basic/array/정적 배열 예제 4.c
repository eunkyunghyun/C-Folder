#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(void)
{
	int i;
	int grade[SIZE];

	for (i = 0; i < SIZE; i++)
		printf("다섯 명의 점수를 입력하세요: ");
		scanf_s("%d", &grade[i]);

	for (i = 0; i < SIZE; i++)
		printf("grade[%d] = %d\n", i, grade[i]);

	return 0;
}
