/* Chapter-5 Asking user input
* Vasanth [27 Aug 2014] */

#include <stdio.h>

int main(void)
{
	int  n;
	int  number;
	int triangularNumber;

	printf("What triangular number do you want?\n");
	scanf("%i", &number);

	triangularNumber=0;

	for(n=0; n<=number; ++n)
	{
		triangularNumber+=n;
	}

	printf("TriangularNumber %i is %i\n",  number, triangularNumber);

	return 0;
}

Output:
			What triangular number do you want?
			100
			TriangularNumber 100 is 5050

	
