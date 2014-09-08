/* Chapter8 Exercise8.3 Calculating the nth triangular number
* Vasanth [08 September 2014] */

#include <stdio.h>

void calculateTriangularNumber(int n)
{
	int i;
	int triangularNumber = 0;
	
	for(i=1; i<=n; ++i)
		triangularNumber += i;
		
	printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main(void)
{
	calculateTriangularNumber(10);
	calculateTriangularNumber(20);
	calculateTriangularNumber(50);
	
	return 0;
}

/* Output:
	Triangular number 10 is 55
	Triangular number 20 is 210
	Triangular number 50 is 1275
*/ 
