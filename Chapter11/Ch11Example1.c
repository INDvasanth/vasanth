/* Chapter-11 Example-11.1 Program to illustrate pointers
* Vasanth [27 September 2014] */

#include <stdio.h>

int main(void)
{
	int count = 10;
	int x;
	int *int_pointer;
	
	int_pointer = &count;
	x = *int_pointer;
	
	printf("Count = %i, x = %i\n", count, x);
	
	return 0;
}
