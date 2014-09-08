/* Chapter-6 Exercise Simple printing calculator using Accumulator
* Vasanth [04 september 2014] */

#include <stdio.h>

int main(void)
{
	float number;
	float S;
	char operator;
	
	printf("Simple Printing Calculation:[+ - * / S(Accumulator) E(End)]\n");
	printf("Type Number and Operator:\n");
	scanf("%f %c", &number, &operator);
	
	S=number;
	
	switch(operator)
	{
		case 'S':
			printf("%f\n", S);
			break;
				
		case '+':
			S+=number;
			printf("%f\n", S);
			break;
		
		case '-':
			S-=number;
			printf("%f\n", S);
			break;
			
		case '*':
			S*=number;
			printf("%f\n", S);
			break;
			
		case '/':
			S/=number;
			printf("%f\n", S);
			break;
			
		case 'E':
			printf("The final value:%f\n", S);
			printf("End of Calculatio.....\n");
	}
	
	
	
	return 0;
}
