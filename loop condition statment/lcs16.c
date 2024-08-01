//16.	Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
int main()
{
	int i,num,s1,s2,sum=0;
	printf("Enter range you want:");
	scanf("%d %d",&s1 ,&s2);
	for(i=s1; i<=s2; i++)
	{
		printf("\n %d",i);
		sum+=i;
	}
	printf("\nsum = %d",sum);
}
