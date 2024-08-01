//8.	Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main()
{
	int large=0 ,num,rem;
	printf("\t<------WELCOME USER----->\t");
	start:
	printf("\nEnter number to find out max from given number :");
	scanf("%d",&num);
	while(num!=0)
	{
		rem	= num % 10;
		if(large<rem)
		{
			large=rem;
		}
		num/=10;
	}
	printf("largest digit is = %d",large);
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
