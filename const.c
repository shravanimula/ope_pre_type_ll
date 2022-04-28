#include <stdio.h>
const int x=5; // x will strores in the data segement read only section
int main()
{
	const int c=10; // c will stores in the stack segement read only section
	x=10;
	c=20;
	printf("%d\n%d\n",x,c);
	return 0;
}
