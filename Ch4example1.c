/* Chapter 4 Basic Data Type
* vasanth 25 Aug 2014 */

#include <stdio.h>

int main(void)
{
	int integerVar=100;
	float floatingVar=331.79;
	double doubleVar=8.44e+11;
	char charVar='W';
	
	_Bool boolVar=0;

	printf("integerVar=%i\n", integerVar);
	printf("floatingVar=%f\n", floatingVar);
	printf("doublevar=%e\n", doubleVar);
	printf("doublevar=%g\n", doubleVar);
	printf("charVar=%c\n", charVar);

	printf("boolvar=%i\n", boolvar);

	return 0;
}

Output:
	integerVar=100
	floatVar=331.79009
	doubleVar=8.440000e+11
	doubleVar=8.44e+11
	charVar=W
	boolvar=0
