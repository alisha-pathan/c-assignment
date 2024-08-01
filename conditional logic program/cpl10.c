//10.	WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter number to find whether a number is negative, positive or zero : ");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("%d is zero",num);
	}
	else if(num>0)
	{
		printf("%d is positive",num);
	}
	else if(num<0)
	{
		printf("%d is negative",num);
	}
	else{
		printf("Invalid");
	}
}
