/* Chapter-7 Example-7.6 Introducing Character Array
* Vasanth [06 September 2014] */

#include <stdio.h>

int main(void)
{
	char word[] = { 'H', 'e', 'l', 'l', 'o', '!'};
	int i;
	
	for(i = 0; i<6; ++i)
		printf("%c", word[i]);
		
	printf("\n");
	
	return 0;
}

Output:
	Hello!
	
