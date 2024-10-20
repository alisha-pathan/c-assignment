//A=65, z=90
 a 
 b  c 
 d  e  f 
 g  h  i  j 
 k  l  m  n  o 
#include<stdio.h>
int main()
{
	int i,j,n;
	char ch;
	printf("Enter any character:");
	scanf(" %c",&ch);
	printf("Enter row:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" %c ",ch);
			ch++;
		}printf("\n");
	}
}
