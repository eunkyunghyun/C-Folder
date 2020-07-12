/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "Hello World";
	char sub[] = "Hello";
	char* p;
	int loc;

	p = strstr(s, sub);
	loc = (int)(p - s);
	loc++;

	if (p != NULL)
		printf("첫번째 문자가 배열의 %d번째에서 탐색되었습니다.\n", loc);
	else
		printf("문자가 탐색되지 않았습니다.\n");
	
	return 0;
}
*/