/* Chapter-10 Example-10.9 Program to use the dictionary lookup program
* Vasanth [22 September 2014] */

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

/* Insert equalStrings function here */
/* Function to look up a word inside a dictionary */

int lookup(const struct entry dictionary[], const char search[], const int entries)
{
	int i;
	bool equalStrings(const char s1[], const char s2[]);
	
	for (i = 0; i < entries; ++i)
		if (equalStrings(search, dictionary[i].word))
			return i;
	
	return -1;		
}
bool equalStrings(const char s1[], const char s2[])
{
	/* ............. */
	
	int i = 0;
	bool areEqual;
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
		
	if (s1[i] == '\0' && s2[i] == '\0')
		areEqual = true;
	else
		areEqual = false;
	
	return areEqual;
}


int main(void)
{
	const struct entry dictionary[100] = 
				{{"aardvark", "A burrowing African mammal"},
				 {"abyss", "A bottomless pit"},
				 {"acumen", "Mentally sharp;keen"},
				 {"addle", "To become confused"},
				 {"aerie", "A high nest"},
				 {"affix", "To append; attach"},
				 {"agar", "A  jelly made from seaweed"},
				 {"ahoy", "A nautical call of greeting"},
				 {"aigrette", "An ornamental cluster of feathers"},
				 {"ajar", "partially opened"}
				};
	char word[10];
	int entries = 10;
	int entry;
	int lookup(const struct entry dictionary[], const char search[], const int entries);
	
	printf("Enter word: ");
	scanf("%14s", word);
	
	entry = lookup(dictionary, word, entries);
	
	if (entry != -1)
		printf("%s\n", dictionary[entry].definition);
	else
		printf("Sorry, the word %s is not in my dictionary.\n", word);
				
	return 0;			
}
