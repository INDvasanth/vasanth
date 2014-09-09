/* Chapter-8 Example-8.11 Changing Array elements in Function
* Vasanth [09 September 2014] */

#include <stdio.h>

void multiplyBy2(float array[], int n)
{
	int i;
	
	for (i=0; i < n; ++i)
		array[i] *= 2;
		
}

int main(void)
{
	float floatValues[4] = {1.2f, -3.7f, 6.2f, 8.55f};
	int i;
	void multiplyBy2 (float array[], int n);
	
	multiplyBy2(floatValues, 4);
	
	for(i = 0; i < 4; ++i)
		printf("%.2f ", floatValues[i]);
		
	printf("\n");
	
	return 0;
}

/*
Output:
	2.40 -7.40 12.40 17.10
*/
