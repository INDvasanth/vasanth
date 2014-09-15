/* Chapter-8 Exercise-1 New version of Calculate Triangular Number using functon
* Vasanth [11 September 2014] */

#include <stdio.h>

void calculateTriangularNumber(int n)
{
	int i;
	int triangularNumber = 0;
	
	
	for (i = 1; i <= n; ++i)
		triangularNumber += i;
		
	printf("Triangular number %i is %i\n\n", n, triangularNumber);
}

int main(void)
{
	int n;
	int counter;
	void calculateTriangularNumber();
	
	for (counter = 1; counter <= 5; ++counter)
	{
		printf ("What triangular number do you want? ");
		scanf ("%i", &n);
		
		calculateTriangularNumber(n);
	}
	return 0;
}
/*
Output:
	What triangular number do you want? 2
	Triangular number 2 is 3
	
	What triangular number do you want? 4
	Triangular number 4 is 10
	
	What triangular number do you want? 10
	Triangular number 10 is 55
	
	What triangular number do you want? 100
	Triangular number 100 is 5050
	
	What triangular number do you want? 200
	Triangular number 200 is 20100
	
*/	
