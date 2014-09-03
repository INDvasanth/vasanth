/* Chapter-6 Calculating the Absolute Value of an integer
* Vasanth [01 September 2014] */

#inculde <stdio.h>
int main(void)
{
	int number;

	printf("Type in your Number: ");
	scanf("%i", &number);

	if(number<0)
		number=-number;

	printf("The absolute value is %i\n", number);

	retuen 0;
}

Output:
	Type in your Number: -56
	The absolute value is 56

	Type in your Number: 100
	The absolute value is 100