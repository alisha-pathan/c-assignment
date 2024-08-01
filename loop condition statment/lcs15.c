//15 .Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main()
{
	int num,i=1,sum;
	printf("\t<------Welcome User----->\t");
	while(i<=10)
	{
		printf("\nEnter number:");
		scanf("%d",&num);
		sum+=num;
		i++;
	}
	printf("sum of given numbers = %d",sum);
	printf("Thank You For Visiting");
}
