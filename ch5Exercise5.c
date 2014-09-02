/* Chapter-5 Exercise check output
* Vasanth [30 Aug 2014] */

#include <stdio.h>
int main (void)
{
	int dollars, cents, count;
	
	for ( count = 1; count <= 5; ++count )
	{
		printf ("Enter dollars: ");
		scanf ("%i", &dollars);
		printf ("Enter cents: ");
		scanf ("%i", &cents);
		printf ("$%i.%.2i\n\n", dollars, cents);
	}
	
	return 0;
}

Output:
	Enter dollars: 1
	Enter cents: 5
	$1.05
	
	Enter dollars: 2
	Enter cents: 65
	$2.65
	
	Enter dollars: 5
	Enter cents: 5
	$5.05
	
	Enter dollars: 6
	Enter cents: 99
	$6.99
	
	Enter dollars: 10
	Enter cents: 8
	$10.08

