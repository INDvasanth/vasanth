/* Chapter-6 Program to evaluate simple expressions of the form number operator number
* Vasanth [02 September 2014] */

#include<stdio.h>

int main(void)
{
	float value1;
	float value2;
	char operator;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	if( operator == '+' )
		printf("%.2f\n", value1 + value2);
	else if( operator == '-' )
		printf("%.2f\n", value1 - value2);
	else if( operator == '*' )
		printf("%.2f\n", value1 * value2);
	else if( operator == '/' )
		printf("%.2f\n", value1 / value2);

	return 0;
}

Output:
	Type in your expression.
	15.96+9.566
	25.53
		
	Type in your expression.
	16.96-89.356
	-72.40
	
	Type in your expression.
	2.5*6.9
	17.25
	
	Type in your expression.
	9/3.5
	2.57
		
