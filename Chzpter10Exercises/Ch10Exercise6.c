/* Chapter 10 Exercise 6 Program to delete the characters in strings
* vasanth [ 02 Oct 2014] */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char original[50];
	int i = 0;
	int numofchartoremove;
	int position;
	char character;
	
	int remove1(char original[], int position, int numofchartoremove);
	
	printf("enter the string \n");
	
	do{
		character = getchar();
		original[i] = character;
		++i;
	}while(character != '\n');

	printf("%s", original);
	
	original[i - 1] = '\0';
	
	printf("enter the position\n");
	scanf("%i", &position);
	printf("enter the number of characters to remove\n");
	scanf("%i", &numofchartoremove);
	
	remove1(original, position, numofchartoremove);
	
	return 0;
}

int remove1(char original[50], int position, int numofchartoremove)
{
	int i;
	char result[50];
	
	for(i = position; i < strlen(original); i++)
	{
		original[i] = original[i + numofchartoremove];
	}
	
	printf("%s", original);
}
