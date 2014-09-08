/* Chapter-7 Example-7.5 Initializing Arrays
* Vasanth [06 September 2014] */

#include <stdio.h>

int main(void)
{
	int array_value[10] = {0, 1, 4, 9, 16};
	int i;
	
	for(i = 5; i < 10; ++i)
		array_value[i] = i * i;
		
	for(i = 0; i < 10; i++)
		printf("array_value[%i] = %i\n", i, array_value[i]);
		
	return 0;
}

Output:
	array_value[0] = 0
	array_value[1] = 1
	array_value[2] = 4
	array_value[3] = 9
	array_value[4] = 16
	array_value[5] = 25
	array_value[6] = 36
	array_value[7] = 49
	array_value[8] = 64
	array_value[9] = 81
	
