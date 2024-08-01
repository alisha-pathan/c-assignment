//7.	WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main()
{
	int num,rem,reverse;
	printf("Enter Any number:");
	scanf("%d",&num);
	int copy=num;
	while(num!=0)
	{
		rem=num%10;
		reverse = (reverse*10) + rem;
		num/=10;
	}
	printf("\nreverse=%d",reverse);
	return 0;
}
