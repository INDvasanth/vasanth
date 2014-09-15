/* Chapter-8 Exercise-2 Calculating the square root of a number using epsilon method
* Vasanth [11 September 2014] */

#include <stdio.h>

float absoluetValue(float x)
{
	if(x < 0)
		x = -x;
	
	return (x);
}

/* Function to compute the square root of a number */

float squareRoot(float x)
{
	const float epsilon = 0.00001;
	float guess = 1.0;
	
	while (absoluetValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
		
	return guess;
}

int main(void)
{
	float num;
	
	printf("Which number want to SquarRoot: ");
	scanf("%f", &num);
	printf("squareRoot(%f) = %f\n", num, squareRoot(num));
	
	return 0;
}

/*
Output:
	Which number want to SquarRoot: 2.0
	squareRoot(2.000000) = 1.414216
	
	Which number want to SquarRoot: 144.0
	squareRoot(144.000000) = 12.000000
*/
