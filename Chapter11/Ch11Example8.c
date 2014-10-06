/* Chapter 11 Example 8 Program to illustrate using pointers and function
 * Vasanth [06 Oct 2014] */

#include <stdio.h>

void test(int *int_pointer)
{
	*int_pointer = 100;
}

int main(void)
{
	void test(int *int_pointer);
	int i = 50;
	int *p = &i;

	printf("Before the call to test i = %i\n", i);
	test (p);
	printf("After the call to test i = %i\n", i);

	return 0;
}
