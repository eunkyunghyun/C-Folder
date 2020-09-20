#include <stdio.h>

int main(void)
{
	char grade;

	printf("Please enter your grade: ");
	scanf("%c", &grade);

	switch (grade)
	{
	case('A'):
		printf("very good\n");
		break;
	case ('B'):
		printf("good\n");
		break;
	case ('C'):
		printf("not bad\n");
		break;
	default:
		printf("bad\n");
		break;
	}

	return 0;
}
