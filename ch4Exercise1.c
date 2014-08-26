/* Chapter-4 Exercise convert 27degree Fahrenheit to Celsius using formula C=(F-32)/1.8
* vasanth [26 Aug 2014] */

#include <stdio.h>

int main(void)
{
	int F=27;
	float C;

	/* Convert Fahrenheit to Celsius formula */
	C=(F-32)/1.8;

	printf("%idegree Fahrenheit is converted Celsius %f\n", F, C);

	return 0;
}

Output:
	27degree Fahrenheit is converted celsius -2.7777778 