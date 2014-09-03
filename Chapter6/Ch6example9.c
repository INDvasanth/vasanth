/* Chapter-6 Program to evaluate simple expressions of the form value operator value
* Vasanth [02 September 2014] */

#include<stdio.h>

int main(void)
{
	float value1, value2;
	char operator;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	switch(operator)
	{
		case '+':
			printf("%.2f\n", value1 + value2);
			break;
		case '-':
			printf("%.2f\n", value1 - value2);
			break;
		case '*':
			printf("%.2f\n", value1 * value2);
			break;
		case '/':
			if( value2 == 0 )
				printf("Division by zero.\n");
			else
				printf("%.2f\n", value1 / value2);
			break;
		default:
			printf("Unknown operator.\n");
			break;
	}

		return 0;
}

Output:
	Type in your expression.
	1.6/6
	0.27
	
	Type in your expression.
	6.9/0
	Division by zero.
	
	Type in your expression.
	6.3&5.3
	Unknown operator.

