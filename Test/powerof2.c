#include <stdio.h>

int main(void) {
int n;
int ispow2(int n);

printf("Check it is power of 2:\n");
scanf("%i", &n);

ispow2(n);

return 0;
}

int ispow2(int n)
{

if(n==0)
	printf(" NO");
else
if(n&(n-1))
{
	printf("No");
}
else printf("yes");

return 0;
}
