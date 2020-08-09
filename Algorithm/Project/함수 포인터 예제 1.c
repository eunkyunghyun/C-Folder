/* #include <stdio.h>

int sum(int, int);
int sub(int, int);

int main(void)
{
	int result;
	int a, b;
	int (*pf)(int, int);

	pf = sum;

	printf("정수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);

	result = pf(a, b);

	printf("a + b = %d\n", result);

	pf = sub;

	printf("정수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);

	result = pf(a, b);

	printf("a - b = %d\n", result);

	return 0;
}

int sum(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}
*/