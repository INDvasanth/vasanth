/* C - Test Copy Character one array to another array
* Vasanth [12 Oct 2014] */

#include <stdio.h>

int main(void)
{
	char a[50] = "Well i go....... to college IIIT Srirangam";
	char b[50];
	int k = strlen(a);
	int i;
	
	for(i = 0; i <= k; ++i)
	{
			b[i] = a[i];		
	}
	printf("%s", b);
		
	return 0;
}
