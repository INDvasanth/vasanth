/* Chapter-6 Exercise Digit of the integer in english
* Vasanth [06 September 2014] */

#include <stdio.h>

int main(void)
{
	int digit;
	int number;
		
	printf("Enter the digit...\n");
	scanf("%i", &number);

	do
	{
		digit = number % 10;
		number = number / 10;
								
		switch(digit)
		{
			case 0:
				printf(" Zero");
				break;
			
			case 1:
				printf(" One");
				break;
			
			case 2:
				printf(" Two");
				break;
				
			case 3:
				printf(" Three");
				break;
				
			case 4:
				printf(" Four");
				break;
				
			case 5:
				printf(" Five");
				break;
				
			case 6:
				printf(" Six");
				break;
				
			case 7:
				printf(" Seven");
				break;
				
			case 8:
				printf(" Eight");
				break;
				
			case 9:
				printf(" Nine");
				break;
				
			default:
				printf("Check it is not digits:\n");
				break;										
		}
	} while( number != 0);
		
	return 0;
}
