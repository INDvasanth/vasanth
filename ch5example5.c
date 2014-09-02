/* chapter-5 Using Nested for Loops
* Vasanth [29 Aug 2014] */

#include <stdio.h>

int main(void)
{
	int n;
	int number;
	int triangularNumber;
	int counter;
	
	for(counter=1; counter<=5; ++counter)
	{
		printf("what triangular number do you want? ");
		scanf("%i", &number);
		
		triangularNumber=0;
		
		for(n=1; n<=number; n++)
			triangularNumber+=n;
			
		printf("Trinangular number %i is %i\n\n", number, triangularNumber);
	}
	
	return 0;
}

Output:
	what triangular number do you want? 12
	Trinangular number 12 is 78
	
	what triangular number do you want? 24
	Trinangular number 24 is 300
		
	what triangular number do you want? 50
	Trinangular number 50 is 1275
	
	what triangular number do you want? 75
	Trinangular number 75 is 2850
	
	what triangular number do you want? 100
	Trinangular number 100 is 5050

		
