/* #include <stdio.h>

int main(void)
{
	int year;
	int time = 0;
	double concentration, amount;

	concentration = 50.0;
	amount = concentration;

	printf("반감기를 입력하세요: ");
	scanf_s("%d", &year);

	while (amount > concentration * 0.1)
	{
		time += year;
		amount = amount / 2;
	}

	printf("반감기는 %d년입니다.\n", time);

	return 0;
}
*/