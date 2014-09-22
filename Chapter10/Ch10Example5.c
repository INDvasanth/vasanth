/* Chapter-10 Example-10.5 Program to illustrate the %s scanf format characters
* Vasanth [22 September 2014] */

#include <stdio.h>

int main(void)
{
	char s1[81];
	char s2[81];
	char s3[81];
	
	printf("Enter text:\n");
	scanf("%s%s%s", s1, s2, s3);
	
	printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
	
	return 0;	
}

