#include <stdio.h>
#define ASSERT(exp) { if (!(exp)) \
		{ printf("�ҽ� ���� %s�� (" #exp ")�� %d��° �ٿ��� ���еǾ����ϴ�.\n"\
		,__FILE__, __LINE__), exit(1);}}

int main(void)
{
	int sum = 0;

	ASSERT(sum == 1);

	return 0;
}