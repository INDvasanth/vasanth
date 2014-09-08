/* Chapter8 Exercise8.3 More on Calling function,
Vasanth [08 sep 2014] */

#include <stdio.h>

void printmessage(void)
{
	printf("programmig is fun.\n");
	
}

int main(void)
{
	int i;
	
	for(i=1; i<=5; ++i)
		printmessage();
		
	return 0;
	
}

/*
Output:
	programming is fun.
	programming is fun.
	programming is fun.
	programming is fun.
	programming is fun.
*/
