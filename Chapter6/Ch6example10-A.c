/* Chapter-6 Program to generate a table of prime numbers
* Vasanth [02 September 2014] */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p;
	int d;
	bool isPrime;

	for(p = 2; p <= 50; ++p) 
	{
		isPrime = true;
		
	for(d = 2; d < p; ++d)
		if(p % d == 0)
			isPrime = false;
		if(isPrime != false)
			printf("%i ", p);
	}

	printf ("\n");
	
	return 0;
}

Output:
	2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
	
