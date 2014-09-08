/* Chapter-7 Example-7.3 Program to generate the first 15 Fibonacci Numbers
* Vasanth [06 September 2014] */

#include <stdio.h>

int main(void)
{
	int fibonacci[15];
	int i;
	
	fibonacci[0] = 0; /* by definition */
	fibonacci[1] = 1; /* ditto */
	
	for(i = 2; i < 15; ++i)
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	
	for(i = 0; i < 15; ++i)
		printf("%i\n", fibonacci[i]);
	
	return 0;	
}

Output:
	0
	1
	1
	2
	3
	5
	8
	13
	21
	34
	55
	89
	144
	233
	377
	
