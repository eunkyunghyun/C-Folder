#include <stdio.h>

void function(int* ptr)
{
	printf("ptr = %p\n", ptr);
}

int main(void)
{
	int value = 10;
	
	printf("&value = %p\n", &value);

	function(&value);

	return 0;
}
