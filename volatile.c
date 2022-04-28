#include <stdio.h>

int main()
{
	int a=5;
	volatile int x=5;
	printf("%d,%d,%d\n",++x,++x,++x); // with volatile
	printf("%d,%d,%d\n",++a,++a,++a); // without volatile
	return 0;
}
