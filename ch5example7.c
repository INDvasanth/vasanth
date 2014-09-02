/* Chapter-5 Finding the Greatest Common Divisor
* Vasanth [29 Aug 2014] */

#include <stdio.h>
int main(void)
{
	int u;
	int v;
	int temp;
	
	printf("Please type in two nonnegative integers.\n");
	scanf("%i%i", &u, &v);
	
	while(v!=0)
	{
		temp=u%v;
		u=v;
		v=temp;
	}
	
	printf("Their greatest common divicer is %i\n", u);
	
	return 0;
}
Output:
	Please type in two nonnegative integers.
	150
	30
	Their greatest common divicer is 5
	
	Please type in two nonnegative integers.
	1026
	405
	Their greatest common divicer is 27
