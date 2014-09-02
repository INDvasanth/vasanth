/* Chapter-5 Exercise find output
* Vasanth [30 Aug 2014] */

#include <stdio.h>
int main(void)
{
	int n;
	int two_to_n;
	
	printf("TABLE OF POWERS OF TWO (2^n)\n\n");
	printf(" n	2 to the n\n");
	printf("--	-------------\n");
	
	two_to_n=1;
	
	for(n=0;n<=10;++n)
	{
		printf("%2i		%i\n", n, two_to_n);
		two_to_n*=2;
	}

return 0;
}

Output:
	TABLE OF POWERS OF TWO (2^n)
	
	 n	2 to the n
	 --	-------------
	 0		1
	 1		2
	 2		4
	 3		8
	 4		16
	 5		32
	 6		64
	 7		128
	 8		256
	 9		512
	 10		1024
	 
