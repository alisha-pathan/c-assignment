//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main()
{
	int i,n,terms=0,j;
	printf("Enter terms : ");
	scanf("%d",&terms);
	int k=1;
	for(i=0; i<terms; i++)
	{
			k+=i;
			printf("\t %d",k); k++;
	}
	return 0;
}
