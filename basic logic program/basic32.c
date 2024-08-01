//32.	Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main()
{
	int num1,num2,sum=0;
	printf("\nEnter int  number : ");
	scanf("%d",&num1);
	printf("\nEnter int number:");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("\nsum : %d",sum);
	printf("\nsize of int = %d",sizeof(sum));
	
	return 0;
}
