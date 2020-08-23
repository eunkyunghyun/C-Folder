#include <stdio.h>
#define DEBUG

int main(void)
{
#ifdef DEBUG
	printf("DEBUG");
#endif
	return 0;
}
