/* Chapter-5 Reversing the Digits of a Number
* Vasanth [29 Aug 2014] */

#include <stdio.h>
int main(void)
{
	int number;
	int right_digit;
	
	printf("Enter your Number.\n");
	scanf("%i", &number);
	
	while(number!=0)
	{
		right_digit=number%10;
		printf("%i", right_digit);
		number=number/10;
	}
	
	printf("\n");
	
	return 0;
}

Output:
	Enter your Number.
	3465879
	9785643
	
