#include <stdio.h>

int main(void)
{
	int grade;

	printf("Please enter the grade: ");
	scanf("%d", &grade);

	if (grade >= 90)
		printf("A");
	else if (grade >= 80 && grade < 90)
		printf("B");

	return 0;
}
