#include <stdio.h>

int main(void)
{
	char str[20];
	
	printf("Enter a string:\n");
	scanf("%[^\n]", &str);
	printf("%s", str);
	
	return  0;
}
