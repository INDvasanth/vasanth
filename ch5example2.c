/* Calculate the 200th triangular number
* Vasanth [25 Aug 2014] */

#include <stdio.h>

int main(void)
{
	int n;
	int triangularNumber;

	triangularNumber=0;

	for(n=1; n<=200; n++)
	{
		triangularNumber=triangularNumber+n;
	}

	printf("The 200th triangular number is %i\n", triangular);
	
	return 0;
}

Output:
	The 200th triangular number is 20100
