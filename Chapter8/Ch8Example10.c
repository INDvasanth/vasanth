/* Chapter-8 Example-8.10 Function to find the minimum value in an array
* Vasanth [09 September 2014] */

#include <stdio.h>

int minimum(int values[], int numberOfElements)
{
	int minValue;
	int i;
	
	minValue = values[0];
	
	for (i = 1; i < numberOfElements; ++i)
		if (values[i] < minValue)
			minValue = values[i];
			
	return minValue;
}

int main(void)
{
	int array1[5] = {157, -28, -37, 26, 10};
	int array2[7] = {12, 45, 1, 10, 5, 3, 22};
	
	int minimum(int values[], int numberOfElements);
	
	printf("Array1 minimum: %i\n", minimum(array1, 5));
	printf("Array2 minimum: %i\n", minimum(array2, 7));
	
	return 0;
}

/*
Output:
	Arrayay1 minimum:-37
	Arraya2 minimum: 1
*/
