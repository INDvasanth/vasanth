/* Chapter 10 Exercise 7 program to insert the characters in strings
* vasanth [ 03 Oct 2014] */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char original[50];
	int i = 0;
	char stringtoinsert[10];
	int position;
	char character;
	
	int remove1(char original[], char stringtoinsert[10], int position);
	
	printf("Enter the string \n");
	scanf("%s", &original);
	printf("Enter the position\n");
	scanf("%i", &position);
	printf("Enter the string to insert\n");
	scanf("%s", &stringtoinsert);
	
	insert(original, stringtoinsert, position);
	
	printf("%s", original);
	
	return 0;
}

int insert(char original[50], char stringtoinsert[10], int position)
{
	int i;
	int j;
	char buffer[10];
	
	for(i = strlen(original); i >= position; i--)
	{
		original[i + strlen(stringtoinsert)] = original[i];
	}
	j = 0;
	
	for(i = position; i < strlen(stringtoinsert) + position; i++)
	{
		while(j < strlen(stringtoinsert))
		{
			original[i] = stringtoinsert[j];
			j++;
			break;
		}
	}
}
