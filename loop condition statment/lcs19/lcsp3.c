//     *
//    ***
//   *****
//  *******
// *********
#include<stdio.h>
int main()
{
	int i,spc,j,k,row,col;
	printf("Enter row:");
	scanf("%d",&row);
	spc = row - 1;
	for(i=0; i<row; i++)
	{
		for(j=spc; j > 0; j--)
		{
			printf(" ");
		}
		for(k=0; k<(2*i+1); k++)
		{
		
				printf("*");
				k+3;
		}	  
		
		printf("\n");   
		spc--;
	}
	return 0;
}
