#include <stdio.h>

struct person
{
	char name[20];
	char phone[20];
};

void swap(struct person *p1, struct person *p2)
{
	struct person p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}

void inform(struct person p)
{
	printf("Name: %s, Phone: %s\n", p.name, p.phone);
}

int main(void)
{
	struct person man = { "Thomas", "354-0000" };
	struct person man2 = { "Smith", "123-4567" };
	struct person *pMan = &man;
	struct person *pMan2 = &man2;

	swap(pMan, pMan2);
	
	inform(man);
	inform(man2);

	return 0;
}