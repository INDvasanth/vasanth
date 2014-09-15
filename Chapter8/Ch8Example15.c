/* Chapter-8 Example-8.15 Illustrating static and automatic variables
* Vasanth [10 September 2014] */

#include <stdio.h>

void auto_static(void)
{
	int autoVar = 1;
	static int staticVar = 1;
	
	printf("Automatic = %i, Static = %i\n", autoVar, staticVar);
	
	++autoVar;
	++staticVar;
}

int main(void)
{
	int i;
	void auto_static(void);
	
	for (i = 0; i < 5; ++i)
		auto_static();
		
	return 0;	
}

/*
Output:
	Automatic = 1, Static = 1
	Automatic = 1, Static = 2
	Automatic = 1, Static = 3
	Automatic = 1, Static = 4
	Automatic = 1, Static = 5
*/
