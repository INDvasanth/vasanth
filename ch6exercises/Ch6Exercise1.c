/*  Chapter-6 Exercise1 Test these two numbers to determine if the first is evenly divisible by the second number
* Vasanth [03 September 2014] */

#include <stdio.h>

int main(void)
{
	int first_no;
	int second_no;
	
	printf("Test First number is evenly divisible by Second number\n");
	scanf("%i %i", &first_no, &second_no);
	
	if(first_no < second_no)
		printf("Yes");
	else
		printf("No");
		
	return 0;
}

Output:
	Test First number is evenly divisible by Second number
	2
	4
	Yes
	
	Test First number is evenly divisible by Second number
	96
	4
	No
