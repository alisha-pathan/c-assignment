#include <stdio.h>
void main()
{
	int year;
	
	printf("\nEnter any year to find it is leap year of not:");
	scanf("%d",&year);
	
	//lets see see if its smaller then 100 then divie by 4 and if it is larger then 100 then divide by 400
	if(year%4 == 0)
	{
	
		printf(" It is leap year");
	}
	else 
	{
		printf("It is not leap year");
	}
}
