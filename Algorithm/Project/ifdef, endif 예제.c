#include <stdio.h>
#define TEST

int main(void)
{
#ifdef TEST
	printf("테스트입니다.");
#endif
	return 0;
}