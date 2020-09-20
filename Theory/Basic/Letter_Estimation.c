#include <stdio.h>

int main(void)
{
	char letter;

	printf("Please enter the letter: ");
	scanf("%c", &letter);

	if ((int)letter >= 65 && (int)letter <= 90)
		printf("capital letter");
	else if ((int)letter >= 97 && (int)letter <= 122)
		printf("small letter");
	else if ((int)letter >= 48 && (int)letter <= 57)
		printf("number");
	else
		printf("etc");

	return 0;
}
