#include <stdio.h>

int main(void)
{
	char text;

	printf("enter text = ");
	scanf("%c", &text);

	printf("%c, %d", text, text);

	return 0;
}