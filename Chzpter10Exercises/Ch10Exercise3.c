/* Chapter 10 Exercise 3 Program to find substring to extract a portion of a character string
* vasanth [02 Oct 2014] */

#include <stdio.h>
#include <stdbool.h>

bool isalphabetic(const char c)
{
	if((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z'))
	{
		return true;	
	}
	else
	{
		return false;
	}	
}
int main(void)
{
	const char text[] = " blackforest ";
	int source = 2;
	int count = 6;
	const char result[5];
	
	char substring(const char text[8], int source, int count, const char result[5]);
	substring(text, source, count, result);
	
	return 0;
}
char substring(const char text[8], int source, int count, const char result[5])
{
	int i;
	
	for(i = source; i <= count; ++i)
	{
		printf("%c", text[i]);
	}
	
	return 0;
}
