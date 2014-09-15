/* chapter-8 Example-8.16 Calculating Factorials Recursively
* Vasanth [10 september 2014] */

#include <stdio.h>

int main(void)
{
	unsigned int j;
	unsigned long int factorial(unsigned int n);
	
	for (j = 0; j < 11; ++j)
		printf("%2u! = %lu\n", j, factorial(j));
		
	return 0;
}

/* Recursivefunction to calculate the factorial of a positive integer */

unsigned long int factorial(unsigned int n)
{
	unsigned long int result;
	
	if (n == 0)
		result = 1;
	else
		result = n * factorial(n - 1);
		
	return result;
}

/*
Output:
	0! = 1
	1! = 1
	2! = 2
	3! = 6
	4! = 24
	5! = 120
	6! = 720
	7! = 5040
	8! = 40320
	9! = 362880
	10! = 3628800
*/	
