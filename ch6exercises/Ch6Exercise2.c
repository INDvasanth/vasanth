/* Chapter-6 Exercise Display the result of dividing and check for divicion by zero
* Vasanth [04 September 2014] */

#include <stdio.h>

int main(void)
{
	int first_no;
	int second_no;
	int result;
	
	printf("Enter the First and Second number:\n");
	scanf("%i %i", &first_no, &second_no);
	
	if(second_no==0)
		printf("Divition by Zero...\n");
	else
	{
		result = first_no / second_no;
		printf("Diviton: %i / %i = %i", first_no, second_no, result);
	}
	
	return 0;		
}

Output:
	Enter the First and Second number:
	25
	5
	Divition: 25 / 5 = 5
	
	Enter the First and second number:
	12
	0
	Divition by Zero...
	
