/* Chapter-7 Exercise calculates the average of an array of 10 floating-point values
* Vasanth [07 Vasanth 2014] */

#include <stdio.h>

int main(void)
{
	float value[10];
	float avg;
	int i;
	
	printf("Enter the floating point value:\n");
	
	for(i = 0; i < 10; ++i)
		scanf("%f", &value[10]);
		
	avg = value[10] / 10;
	
	printf("The Average of Floating value:%f\n", avg);
	
	return 0;
}
