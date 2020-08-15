#include <stdio.h>
#define ASSERT(exp) { if (!(exp)) \
		{ printf("소스 파일 %s의 (" #exp ")이 %d번째 줄에서 실패되었습니다.\n"\
		,__FILE__, __LINE__), exit(1);}}

int main(void)
{
	int sum = 0;

	ASSERT(sum == 1);

	return 0;
}