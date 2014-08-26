/* Chapter-5 Generate a table of triangular number
* Vasanth [26 Aug 2014] */

#include <stdio.h>

int main(void)
{
	int n;
	int triangularNumber;

	printf("THE TABLE OF TRIANGULAR NUMBER\n\n");
	printf("n    Sum from 1 to n\n");
	printf("---  ---------------\n");

	triangularNumber=0;

	for(n=1; n<=10; ++n)
	{
		triangularNumber+=n;
		printf("  %i              %i\n", n, triangularNumber);
	}

	return 0;
}

Output:
	THE TABLE OF TRIANGULAR NUMBER

	n    Sum from 1 to n
	---  ---------------
	1 	1
	2 	3
	3 	6
	4 	10
	5 	15
	6 	21
	7 	28
	8 	36
	9 	45
	10 	55