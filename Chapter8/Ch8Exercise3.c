/* Chapter-8 Exercise-3 Calculating X^n
* Vasanth [11 September 2014] */

#include <stdio.h>

void calculat(int X, int n)
{
	long int y;
	
	y = X^n;
	
	return (y);
}

int main(void)
{
	int a;
	int b;
	long int y;
	void calculat(int x, int n);
	
	printf("Enter the two integer arguments x and n: ");
	scanf("%i %i", &a, &b);
	calculat(a, b);
	
	printf("Calculating: %i^%i = %lu\n", a, b, y);
	
	return 0;
}
