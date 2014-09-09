/* Chapter-8 Example-8.8 Calculating the square root of a number
* Vasanth [09 September 2014] */

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
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
	printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
	printf("squareRoot(17.5) = %f\n", squareRoot(17.5));
	
	return 0;
}

/*
Output:
	squareRoot(2.0) = 1.414216
	squareRoot(144.0) = 12.000000
	squareRoot(17.5) = 4.183300
*/
