/* Chapter-4 Converting Between Integers and Floats
* Vasanth [26 Aug 2014] */

#include <stdio.h>

int main(void)
{
	float f1=123.125;
	float f2;
	
	int i1;
	int i2=-150;
	char c='a';

	/* Floating integer conversion */
	i1=f1;
	printf("%f assigned to an int produces %i\n", f1, i1);
	
	/* Integer to Floating Conversion */
	f1=i2;
	printf("%i assigned to an floar produces %f\n", i2, f1);

	/* Integer Divided by Integer*/
	f1=i2/100;
	printf("%i divided by 100 produces %f\n", i2, f1);

	/* Integer Divided by a flaot */
	f2=i2/100.0;
	printf("%i divided by 100.0 produces %f\n", i2, f2);

	/* Type Cast Operator */
	f2=(float)i2/100;
	printf("(float) %i divided by 100 produces %f\n", i2, f2);

	return 0;
}

Output:
	123.125000 assigned to an int produces 123
	-150 assigned to a float produces -150.000000
	-150 divided by 100 produces -1.000000
	-150 divided by 100.0 produces -1.500000
	(float) -150 divided by 100 produces -1.500000