//23.	C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main()
{
	int num,reverse=0,rem,copy,i;
	printf("Enter number to reverse:");
	scanf("%d",&num);
	copy= num;
	for(i=num; i!=0; i=i/10)
	{ 
		rem = i%10;
		reverse = (reverse * 10) + rem;
	}
	printf("Original number : %d",copy);
	printf("\nReverse number : %d",reverse);
	return 0;
}
