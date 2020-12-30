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

	strcpy((*pMan).phone, "333-1234");

	printf("Name = %s, Phone = %s\n", man.name, man.phone);

	return 0;
}