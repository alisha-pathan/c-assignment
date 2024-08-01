//9.	Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("\t<------WELCOME USER----->\t");
	start:
	printf("\nEnter number to make a summation of given number :");
	scanf("%d",&num);
	while(num!=0)
	{
		rem = num % 10;
		sum+=rem;
		num/=10;
	}
	printf("%d",sum);char ans;
	printf("\nDo You want to continue(y/n)?:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;	
	}
	printf("Thank You For Visiting");
	return 0;
}
