#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = "Hello, World!";

	if (strcpy(str, "Hello, World!") == 0)
	{
		printf("Equal\n");
	}
	else
	{
		printf("Different\n");
	}

	return 0;
}
