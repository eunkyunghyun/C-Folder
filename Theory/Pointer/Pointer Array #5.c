#include <stdio.h>

int main(void)
{
	char str[4][11] = { "Hello", "World", "C", "Language" };
	
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);

	return 0;
}
