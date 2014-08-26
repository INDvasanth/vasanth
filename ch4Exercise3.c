/* Chapter-4 Exercise evaluates the expression ((3.31*10^-8)*(2.01*10^-7))/((7.16*10^-6)+(2.01*10^-8))
* Vasanth [26 Aug 2014] */

#include <stdio.h>

int main(void)
{
	float a=3.31e-8;
	float b=2.01e-7;
	float c=7.16e-6;
	float d=2.01e-8;
	float x;

	/* Evaluates the expression */
	x=(a*b)/(c/d);
	printf("The evaluates ((3.31*10^-8)*(2.01*10^-7))/((7.16*10^-6)+(2.01*10^-8)) result is %f", x);
	
	return 0;
}

Output:
	The evaluates ((3.31*10^-8)*(2.01*10^-7))/((7.16*10^-6)+(2.01*10^-8)) result is 0.000000