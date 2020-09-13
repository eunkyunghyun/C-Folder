#include <stdio.h>

int main(void)
{
	int grade = 0;
	int answer;

	printf("Please enter the answer of 3 + 5: ");
	scanf("%d", &answer);

	if (answer == 8)
		grade++;

	printf("Please enter the answer of 3 * 8: ");
	scanf("%d", &answer);

	if (answer == 24)
		grade++;

	printf("Please enter the answer of 8 - 3: ");
	scanf("%d", &answer);

	if (answer == 5)
		grade++;

	printf("grade = %d\n", grade);

	return 0;
}
