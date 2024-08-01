//17.	Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main()
{
	int num,even,odd;
	printf("\n<-------Welcome users------>");
	int i=1;
	while(i<=5)
	{
		printf("\nEnter Number to find its even of odd:");
		scanf("%d",&num);
		if(num%2==0)
		{
			even=num;
		}
		else{
			printf("\n%d is odd number",num);
		}
		i++;
	}
}

