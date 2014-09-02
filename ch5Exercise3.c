/* Chapter-5 Generate and print a table off the first 10 factorials.
* Vasanth [30 Aug 2014] */
#include <stdio.h>
int main(void)
{
	int n;
	int fact=1;
	
	printf("FIRST 10 FACTORIALS\n");
	
	for(n=1; n<=10; n++)
	{
		fact *=n;
		printf("The talbe of the  fact %i! is %i\n", n, fact);
	}
	
	return 0;
}

Output:
	FIRST 10 FACTORIALS
	The talbe of the  fact 1! is 1
	The talbe of the  fact 2! is 2
	The talbe of the  fact 3! is 6
	The talbe of the  fact 4! is 24
	The talbe of the  fact 5! is 120
	The talbe of the  fact 6! is 720
	The talbe of the  fact 7! is 5040
	The talbe of the  fact 8! is 40320
	The talbe of the  fact 9! is 362880
	The talbe of the  fact 10! is 3628800

