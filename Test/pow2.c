#include <stdio.h>

int main(void)
{
	int ispow2(int u);
	int u;
	
	scanf("%i", &u);
	printf("%i", ispow2(u));
	
	return 0;
}
int ispow2(int u)
{
	if(u == 0)
		return 1;
	if(u != 1)
	{
		if(u%2 != 0)
			printf("It is not 2-power:");
		u = u/2;
		else
			printf("It is 2-power");
	}

}
