/* Chapter-7 Example-7.8 Generating Fibonacci Numbers Usinng Variable-Length Arrays
*vasanth [06 September 2014] */

#include <stdio.h>

int main (void)
{
	int i;
	int numFibs;
	
	printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
	scanf("%i", &numFibs);
	
	if(numFibs < 1 || numFibs > 75)
	{
	printf("Bad number, sorry!\n");
	return 1;
	}
	
	unsigned long long int Fibonacci[numFibs];
	
	Fibonacci[0] = 0; /* by definition */
	Fibonacci[1] = 1; /* ditto */
	
	for(i = 2; i < numFibs; ++i)
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
		
	for(i = 0; i < numFibs; ++i)
		printf ("%llu ", Fibonacci[i]);
		
	printf ("\n");
	
	return 0;
}

Output:
	How many Fibonacci numbers do you want (between 1 and 75)? 50
	0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584
	4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229
	832040 1346269 2178309 3524578 5702887 9227465 14930352 24157817
	39088169 63245986 102334155 165580141 267914296 433494437 701408733
	1134903170 1836311903 2971215073 4807526976 7778742049
	
	How many Fibonacci numbers do you want (between 1 and 75)? 78
	Bad number, sorry!
