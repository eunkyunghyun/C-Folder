#include <stdio.h>

struct person 
{
	char name[20];
	char phone[20];
};

void inform(struct person p)
{
	printf("%#x\n", &p);
	printf("Name: %s, Phone: %s\n", p.name, p.phone);
}

int main(void)
{
	struct person p = { "Hello, World!", "010-1234-5678" };
	
	inform(p);
	printf("%#x\n", &p);

	return 0;
}