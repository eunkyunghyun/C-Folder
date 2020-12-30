#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phone[20];
};

int main(void)
{
	struct person man = { "Thomas", "354-0000" };
	struct person* pMan;
	pMan = &man;
	
	printf("Name = %s, Phone = %s\n", man.name, man.phone);
	printf("Name = %s, Phone = %s\n", (*pMan).name, (*pMan).phone);

	return 0;
}