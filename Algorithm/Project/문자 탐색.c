/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "Hello World";
	char c = 'a';
	char* p;
	int loc;

	p = strchr(s, c);
	loc = (int)(p - s);
	loc++;

	if (p != NULL)
		printf("첫번째 문자가 배열의 %d번째에서 탐색되었습니다.\n", c, loc);
	else
		printf("문자가 탐색되지 않았습니다.\n", c);

	return 0;
}
*/