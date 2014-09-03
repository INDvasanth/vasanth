/* Chapter-6 Program to evaluate simple expressions of the form value operator value
* Vasanth [02 September 2014] */

#include<stdio.h>

int main(void)
{
	float value1, value2;
	char operator;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	if(operator == '+')
		printf("%.2f\n", value1 + value2);
	else if(operator == '-')
		printf("%.2f\n", value1 - value2);
	else if(operator == '*')
		printf("%.2f\n", value1 * value2);
	else if(operator == '/')
		if( value2 == 0 )
			printf("Division by zero.\n");
		else
			printf("%.2f\n", value1 / value2);
	else
		printf("Unknown operator.\n");

	return 0;
}

Output:
	Type in your expression.
	1.6+0.9
	2.50
	
	Type in your expression.
	63.2/0
	Division by zero.
	
	Type in your expression.
	5.9$8.3
	Unknown operator.
	
