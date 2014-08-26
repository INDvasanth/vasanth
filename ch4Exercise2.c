/* Chapter-4 Exercise Evaluate Polynomial
* Vasanth [25 Aug 2014] */

#include <stdio.h>

int main(void)
{
	float x=2.55;
	float y;

	/* calculation of polynomial */
	y=3(x*x*x)-5(x*x)+6;

	printf("x=%f evaluate to find Polynomial is %f\n", x, y);

	return 0;
}

Output:
	x=2.55 evaluate to find Polynomial is 23.231625
