/* Chapter-7 Example-7.4 Resvising the program to generate Prime Numbers, Version 2
* Vasanth [06 September 2014] */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p;
	int i;
	int primes[50];
	int primeindex = 2;
	bool isPrime;
	
	primes[0] = 2;
	primes[1] = 3;
	
	for(p = 5; p <= 50; p = p + 2)
	{
		isPrime = true;
		
		for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
		{
			if(p % primes[i] == 0)
				isPrime = false;
		}
		
		if(isPrime == true)
		{
			primes[primeindex] = p;
			++primeindex;
		}
		
	}
	
	for(i = 0; i < primeindex; ++i)
		printf("%i ", primes[i]);
		
	printf("\n");
	
	return 0;	
}

Output:
	2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
	
