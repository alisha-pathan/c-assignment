//10.	Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans:5)
#include<stdio.h>
int main()
{
	int num,sum=0,rem,firstNum;
	printf("\t<------WELCOME USER----->\t");
	start:
	printf("\nEnter number to make a summation of first and last Digit :");
	scanf("%d",&num);
	int lastNum=num%10;
	while(num>=10)
	{	
		num/=10;
	    firstNum=num;
	}
	printf("%d + %d = %d",firstNum,lastNum,lastNum+firstNum);
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
