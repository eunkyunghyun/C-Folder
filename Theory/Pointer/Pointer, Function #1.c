#include <stdio.h>

void function(int* ptr)
{
	(*ptr)++;
}

int main(void)
{
	int value = 10;
	
	function(&value);

	printf("value = %d\n", value);

	return 0;
}
