#include <stdio.h>

int main(void)
{
	int money;
	int a, b, c;

	scanf("%d", &money);

	a = money / 500;
	b = (money % 500) / 100;
	c = ((money - (a * 500 + b * 100))) / 10;

	printf("500￦: %d Unit, 100￦: %d Unit, 10￦: %d Unit", a, b, c);

	return 0;
}
