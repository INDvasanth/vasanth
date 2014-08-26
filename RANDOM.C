/* Random number
* vasanth [26 Aug 2014] */

#include <stdio.h>

int main(void)
{
	int x;
	int a;

	for(a=0;a<=99;a++)
	{       x=(a*x+2) % 99;
		printf("%i\n", x);
	}

	return 0;
}