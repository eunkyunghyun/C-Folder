#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phone[20];
};

int main(void)
{
	struct person p;
	strcpy(p.name, "Hello, World!");
	strcpy(p.phone, "010-1234-5678");
	printf("Name: %s, Phone: %s\n", p.name, p.phone);

	return 0;
}