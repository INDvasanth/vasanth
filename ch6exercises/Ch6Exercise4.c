/* Chapter-6 Exercise Reverse the digits
* Vasanth [06 september 2014] */

#include <stdio.h>

int main(void)
{
	int digit;
	int number;
	
	printf("Ener the Digit:\n");
	scanf("%i", &number);
	
	do
	{
		digit = number % 10;
		printf("%i", digit);
		number = number / 10;
	} while(number != 0);
	
	printf("\n");
	
	return 0;
}
