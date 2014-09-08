/* Chapter-8 Example-8.5 Function to find the greatest common divisor of two nonnegative integer values
* Vasanth [08 September 2014] */

#include <stdio.h>

void gcd(int u, int v)
{
	int temp;
	
	printf("The gcd of %i and %i is ", u, v);
	
	while(v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf("%i\n", u);
}

int main(void)
{
	gcd(150, 35);
	gcd(1026, 405);
	gcd(83, 240);
	
	return 0;
}

/*
Output:
The gcd of 150 and 35 is 5
The gcd of 1026 and 405 is 27
the gcd of 83 and 240 is 1
*/
