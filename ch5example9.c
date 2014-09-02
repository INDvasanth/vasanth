/* Chapter-5 program to Revers the Digits of a Number
* Vasanth [29 Aug 2014] */

#include <stdio.h>
int main(void)
{
	int number;
	int right_digit;
	
	printf("Enter your Number.\n");
	scanf("%i", &number);
	
	do
	{
		right_digit=number%10;
		printf("%i", right_digit);
		number=number/10;
	}
	while(number!=0);
	
	printf("\n");
	
	return 0;
}

Output:
	Enter your Number.
	13579
	97531
	
	Enter your Number.
	0
	0
	
