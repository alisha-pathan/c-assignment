//14.	Accept 5 numbers from user and find those numbers factorials 
#include<stdio.h>
int main()
{
	int num,fact=1,i,j;
	printf("\t<------WELCOME USER----->\t");
	start:
	for(i=1;i<=5;i++)
	{
		printf("\nEnter numbers to find factorial:");
		scanf("%d",&num);
		fact=1;
			for(j=1;j<=num;j++)
			{
				fact*=j;
			}
			printf("Factorial of %d = %d ",num,fact);
	}
	char ans;
	printf("\nDo You want to continue(y/n)?:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;	
	}
	printf("Thank You For Visiting");
	return 0;
}
