#include <stdio.h>

int main()
{   
	int a,b;

	printf("a = ");
	scanf("%d", &a);
		
	printf("b = ");
	scanf("%d",&b);

	printf("P = %d\n", (a+b)*2);
	
	printf("S = %d\n", a*b);

	return 0;
}
