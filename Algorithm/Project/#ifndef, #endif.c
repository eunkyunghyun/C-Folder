#include <stdio.h>

int main(void)
{
#ifndef DEBUG
#define DEBUG
	printf("DEBUG");
#endif
	return 0;
}
