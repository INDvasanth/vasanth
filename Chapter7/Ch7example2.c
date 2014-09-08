/* Chpater-7 Example-7.2 Demonstrating an Array of Counters
* Vasanth [06 September 2014] */

#include <stdio.h>

int main(void)
{
	int ratingcounters[11];
	int i;
	int response;
	
	for(i = 1; i <= 10; ++i)
		ratingcounters[i] = 0;
		
	printf("Enter your responses...\n");
	
	for(i = 1; i <= 20; ++i)
	{
		scanf("%i", &response);
		
		if(response < 1 || response > 10)
			printf("Bad response:%i\n", response);
		else
			++ratingcounters[response];
	}
	
	printf("\n\nRating	Number of Responses\n");
	printf("-------	-----------------\n");
	
	for(i = 1; i <= 10; ++i)
		printf("%4i%14i\n", i, ratingcounters[i]);
		
	return 0;
}

Output:
	Enter your responses...
	1
	2
	3
	4
	5
	5
	6
	8
	9
	7
	10
	10
	11
	Bad response:11
	2
	5
	7
	8
	8
	7
	3
	
	
	Rating	Number of Responses
	------	------------------
		1			1
		2			2
		3			2
		4			1
		5			3
		6			1
		7			3
		8			3
		9			1
		10			2
		
