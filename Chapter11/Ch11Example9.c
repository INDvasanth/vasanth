/* Chapter 11 Example 9 Using pointers to exchange values
 * Vasanth [06 Oct 2014] */

#include <stdio.h>

void exchange(int *const print1, int *const print2)
{
	int temp;
	
	temp = *print1;
	*print1 = *print2;
	*print2 = temp;
}

int main(void)
{
	void exchange(int *const print1, int *const print2);
	int i1 = -5;
	int i2 = 66;
	int *p1 = &i1;
	int *p2 = &i2;

	printf("i1 = %i, i2 = %i\n", i1, i2);

	exchange(p1, p2);
	printf("i1 = %i, i2 = %i\n", i1, i2);

	exchange(&i1, &i2);
	printf("i1 = %i, i2 = %i\n", i1, i2);

	return 0;
}
