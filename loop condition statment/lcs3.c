/*3.	WAP to take 10 no. Input from user find out below values
a.	How many Even numbers are there
b.	How many odd numbers are there
c.	Sum of even numbers
d.	Sum of odd numbers
*/
#include <stdio.h>
int main()
{
	int i,sume=0,num1,num2,odd,even,counte=0,counto=0,sumo=0;
	printf("\nEnter num1:");
	scanf("%d",&num1);
	printf("\nEnter num2:");
	scanf("%d",&num2);
	if(num1<num2)
	{
			for(i=num1; i<=num2; i++)
				{
					if(i%2==0)
					{
						sume=sume+i;
						counte++;
					}
					else{
						sumo=sumo+i;
						counto++;
						}
				}
	}
	else{
			for(i=num1; i>=num2; i--)
		{
			if(i%2==0)
			{
				sume=sume+i;
				counte++;
			}
			else{
				sumo=sumo+i;
				counto++;
				}
		}
	}
	printf("\nsum of Even numbers :%d",sume);
	printf("\nsum of odd numbers :%d",sumo);
	printf("\n Even numbers :%d",counte);
	printf("\n odd numbers :%d",counto);
	return 0;
}
