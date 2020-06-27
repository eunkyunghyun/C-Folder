/* #include <stdio.h>
void binary(int x);

int main(void)
{
	int i;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &i);

	binary(i);
	return 0;
}

void binary(int x)
{
	if (x > 0)
	{
		binary(x / 2);
		printf("%d", x % 2);
	}

	return 0;
}
*/