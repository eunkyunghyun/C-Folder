#include <stdio.h>

int main(void)
{
	int i;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &i);

	int *p = &i;

	printf("%d", *p);
}