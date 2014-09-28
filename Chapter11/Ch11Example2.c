/* Chapter-11 Example-11.2 Further examples of pointers 
* Vasanth [27 september 2014] */

#include <stdio.h>

int main(void)
{
	char c = 'Q';
	
	char *char_pointer = &c;
	
	printf("%c %c\n", c, *char_pointer);
	
	c = '/';
	
	printf("%c %c\n", c, *char_pointer);
	
	*char_pointer = '(';
	
	printf("%c %c", c, *char_pointer);
	
	return 0;
}
