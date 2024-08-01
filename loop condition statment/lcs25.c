//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
	int i,terms;
	printf("Enter terms : ");
	scanf("%d",&terms);
	printf("\n Series = ");
	for(i=1; i<=terms; i++)
	{
		printf("\t %d", i*i);
	}
	return 0;
}
