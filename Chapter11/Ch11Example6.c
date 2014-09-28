/* Chapter-11 Example-11.6 Function to use linked lists
* Vasanth [28 september 2014] */

#include <stdio.h>

int main(void)
{
	struct entry
	{
		int value;
		struct entry *next;
	};
	struct entry n1;
	struct entry n2;
	struct entry n3;
	int i;
	
	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
	n1.next = &n2;
	n2.next = &n3;
	
	i = n1.next->value;
	
	printf("%i ", i);	
	printf("%i\n", n2.next->value);
	
	return 0;
}
