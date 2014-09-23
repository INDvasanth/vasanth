/* Chapter-10 Examble-10.8 Counting words in a piece of text
* Vasanth [22 September 2014] */

#include <stdio.h>
#include <stdbool.h>

/* Insert alphabetic function here */
/* Insert readLine function here */
/* Insert countWords function here */

int main(void)
{
	char text[81];
	int totalWords = 0;
	int countWords(const char string[]);
	void readLine(char buffer[]);
	bool endOfText = false;
	
	printf("Type in your text.\n");
	printf("When you are done, Press ' RETURN'.\n\n");
	
	while (! endOfText)
	{
		readLine(text);
		
		if (text[0] == '\0')
			endOfText = true;
		else
			totalWords += countWords(text);	
	}
	
	printf("\nTere are %i words in the above text.\n", totalWords);
	
	return 0;
}

void readLine(char buffer[])
{
	/*     ...............   */
	
	char character;
	int i = 0;
	
	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	}
	while (character != '\n');
	
	buffer[i - 1] = '\0';
}

int countWords(const char string[])
{
	/* ................   */
	
	int i;
	int wordCount = 0;
	bool lookingForWord = true;
	bool alphabetic(const char c);
	
	for (i = 0; string[i] != '\0'; ++i)
		if (alphabetic(string[i]))
		{
			if (lookingForWord)
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;
		
	return wordCount;		
}

bool alphabetic(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;	
}
