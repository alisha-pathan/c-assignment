/*11.WAP to find number is even or odd using ternary operator*/
#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number to find its odd or even :");
	scanf("%d",&a);
	
	(a == 0)?printf("Its is zero"):(a%2 == 0)?printf("It is even"):printf("It is odd");
	/*if(a==0)
	{
		printf("it is zero");
	}
	else if(a % 2 == 0)
	{
		printf("It is even");
	}
	else
	{
		printf("it is odd");
	}
	*/
		
}
