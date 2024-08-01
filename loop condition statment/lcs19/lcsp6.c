/*
*
**
***
****
*****
******
*****
****
***
**
*
*/

#include<stdio.h>
int main()
{
	int i,j,k,l,row;
	
	printf("Enter size:");
	scanf("%d",&row);
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("* ");
		}printf("\n");
	}
	
	for(i=row; i>0; i--)
	{
		for(j=0; j<i; j++)
		{
			printf("* ");	
		}printf("\n"); 
	}
}
