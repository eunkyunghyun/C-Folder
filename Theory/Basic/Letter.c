#include <stdio.h>

int main(void)
{
	char letter;

	printf("Please enter the letter: ");
	scanf("%c", &letter);
	
	letter = (int)letter

	if (letter >= 65 && letter <= 90)
		printf("capital letter");
	else if (letter >= 97 && etter <= 122)
		printf("small letter");
	else if (letter >= 48 && letter <= 57)
		printf("number");
	else
		printf("etc");

	return 0;
}
