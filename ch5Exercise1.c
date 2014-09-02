/* Chapter-5 Exercises Generate and Display a table of n and n^2 value
* Vasanth [29 Aug 2014] */

#include <stdio.h>
int main(void)
{
	int n;
	int value;
	
	printf("ENTER THE TABLE OF VALUE\n\n");
	printf("	n		sum value of n^2\n");
	printf("	--		------------------\n");
	
	for(n=1; n<=10; n++)
	{
		value=(n*n);
		printf("	%i			%i\n", n, value);
	}	
	
	return 0;
	
}

Output:
	ENTER THE TABLE OF VALUE
	
		n		sum value of n^2
		--		------------------
		1				1
		2				4
		3				9
		4				16
		5				25
		6				36
		7				49
		8				64
		9				81
		10				100
		
