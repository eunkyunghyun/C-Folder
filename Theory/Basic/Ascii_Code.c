#include <stdio.h>

int main(void)
{
	char ascii;

	printf("Please enter the alphabet: ");
	scanf("%c", &ascii);

	printf("%c, %d\n", ascii, ascii);

	return 0;
}
