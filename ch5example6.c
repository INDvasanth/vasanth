/* Chapter-5 Introducing the while statement
* Vasanth [29 Aug 2014] */

#include <stdio.h>

int  main(void)
{
	int count=1;
	
	while(count<=5)
	{
		printf("%i\n", count);
		++count;
	}
	
	return 0;
}

Output:
	1
	2
	3
	4
	5

