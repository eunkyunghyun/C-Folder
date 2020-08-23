#include <stdio.h>
#define DEBUG 1

int main(void)
{
#if DEBUG == 1
printf("DEBUG = 1");
#elif DEBUG = 2
printf("DEBUG = 2");
#endif
return 0;
}
