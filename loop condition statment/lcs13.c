//13.	calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("\nEnter any number to find its factorial:");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		fact *= i;
		i++;
	}
	printf("Factorial of given num %d : %d",num,fact);
	
}
