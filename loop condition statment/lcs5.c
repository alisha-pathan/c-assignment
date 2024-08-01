//5.	WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int mul=1,num,i;
	printf("Enter Any number to find its factorial:");
	scanf("%d",&num);
/*	for(i=1;i<=num;i++)
	{
		mul*=num;
		printf("%d\t",mul);
	}*/
	for(i=1;i>=num;i--)
	{
		mul=mul*num;
		printf("%d\t",mul);
	}
}
