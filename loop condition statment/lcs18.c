/*18.	Write a C Program to Print the Multiplication Table of N i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50
*/
#include<stdio.h>
int main()
{
	int i,n;
	start:
	printf("Enter any number for the multiplication table:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d x %d  = %d",n,i,n*i);
	}
	char ans;
	printf("\nDo You Wanna Continue?(y/n):");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;
	}
}
