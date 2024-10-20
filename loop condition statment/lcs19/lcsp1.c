0 
0 1 
0 1 0 
0 1 0 1 
0 1 0 1 0 

#include<stdio.h>
int main()
{
	int row,r,i,j;
	printf("Enter size:");
	scanf("%d",&row);
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<i; j++)
		{
			r=j%2;
			printf("%d ",r);
		}printf("\n");
	}
}
