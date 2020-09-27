#include <stdio.h>

int main(void)
{
	int money;
	int a, b, c;
	
	printf("Please enter the money: ");
	scanf("%d", &money);

	a = money / 500;
	b = (money % 500) / 100;
	c = ((money - (a * 500 + b * 100))) / 10;

	printf("500￦: %d, 100￦: %d, 10￦: %d", a, b, c);

	return 0;
}
