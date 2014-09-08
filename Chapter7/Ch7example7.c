/* Chapter-7 Example-7.7 Program to converting a positive integer to another base
* Vasanth [06 September 2014] */

#include <stdio.h>

int main(void)
{
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit;
	int base;
	int index = 0;
	
	/* Get the number and the base */
	
	printf("Number to be converted? ");
	scanf("%ld", &numberToConvert);
	
	printf("Base? ");
	scanf("%i", &base);
	
	/* Convert to the indicated base */
	
	do
	{
		convertedNumber[index] = numberToConvert % base;
		++index;
		numberToConvert = numberToConvert / base;
	} while(numberToConvert != 0);
	
	/* Display the Result in reverse order */
	
	printf("Converted number = ");
	
	for(--index; index >= 0; --index)
	{
		nextDigit = convertedNumber[index];
		printf("%c", baseDigits[nextDigit]);
	}
	
	printf("\n");
	
	return 0;
}

Output:
	Number to be converted? 12
	Base? 2
	Converted number = 1100
	
	Number to be converted? 10
	Base? 2
	Converted number = 1010
	
	Number to be converted? 16
	Base? 8
	Converted number = 20
	
	Number to be converted? 2014
	Base? 16
	Converted number = 7DE
	
