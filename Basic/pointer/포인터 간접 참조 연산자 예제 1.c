#include <stdio.h>

int main(void)
{
	int i;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &i);

	int *p = &i;

	printf("%d", *p);
}