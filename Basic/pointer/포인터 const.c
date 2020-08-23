/* #include <stdio.h>

int main(void)
{
	char s[] = "Barking dogs seldom bite.";
	char t[] = "A bad workman blames his tools.";
	const char* p = s;
	char* const q = s;

	// p[3] = 'a'; // p가 참조하는 값은 변경이 불가능하다.

	p = t; // p는 변경이 가능하다.

	// q = t; // q는 변경이 불가능하다.

	q[3] = 'a'; // q가 참조하는 값은 변경이 가능하다.

	return 0;
}
*/