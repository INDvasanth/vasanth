/* Chapter8 Exercise8.2 Calling function
* Vasanth [08 September 2014] */

#include <stdio.h>

void printmessage(void)
{
	printf("Programming is fun.\n");
	
}

int main(void)
{
	printmessage();
	printmessage();
	
	return 0;
	
}

/*
Output:
	Programming is fun.
	Programming is fun.
*/
