/* lcs 19.4 
1 
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
	int num,i,j,k=1;
	printf("Enter rows:");
	scanf("%d",&num);
	for(i=0 ;i<=num; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d ",k);
			k++;
		}printf("\n");
	}
}
