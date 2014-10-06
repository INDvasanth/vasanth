/* Chapter 11 Example 10 Returning a pointer from a function 
 * Vasanth [06 Oct 2014] */

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

struct entry *findEntry(struct entry *listPtr, int match)
{
	while(listPtr != (struct entry *) 0)
		if( listPtr->value == match)
			return (listPtr);
		else
			listPtr = listPtr->next;

	return (struct entry *) 0;
}

int main(void)
{
	struct entry *findEntry(struct entry *listPrt, int match);
	struct entry n1;
	struct entry n2;
	struct entry n3;
	struct entry *listPtr;
	struct entry *listStart = &n1;

	int search;

	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = 0;

	printf("Enter value to locate: ");
	scanf("%i", &search);

	listPtr = findEntry(listStart, search);

	if(listPtr != (struct entry *) 0)
		printf("Found %i.\n", listPtr->value);
	else
		printf("Not found.\n");

	return 0;
}
