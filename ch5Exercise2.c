/* Chapter-5 Generate every fifth triangular number between 5 and 50
* Vasanth [30 Aug 2014] */

#include <stdio.h>
int main(void)
{
	int n;
	int triangularNumber;
	
	printf("Triangular number between 5 and 50\n\n");
	
	for(n=5; n<=50;)
	{
		triangularNumber= n*(n+1)/2;
		printf("The %ith triangular number is %i\n", n, triangularNumber);
		n+=5;
	}
	
	return 0;
}

Output:
	Triangular number between 5 and 50
	
	The 5th triangular number is 15
	The 10th triangular number is 55
	The 15th triangular number is 120
	The 20th triangular number is 210
	The 25th triangular number is 325
	The 30th triangular number is 465
	The 35th triangular number is 630
	The 40th triangular number is 820
	The 45th triangular number is 1035
	The 50th triangular number is 1275
	

