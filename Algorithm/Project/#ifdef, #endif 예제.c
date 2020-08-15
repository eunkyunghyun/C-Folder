#include <stdio.h>
#define TEST

int main(void)
{
#ifdef TEST
	printf("TEST");
#endif
	return 0;
}
