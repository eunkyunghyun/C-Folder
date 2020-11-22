#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = "Hello";

	strcat(str, ",World!");

	printf("%s", str);

	return 0;
}
