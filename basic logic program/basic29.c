/*29.	Convert minutes into seconds and hours
here are the basic information about our code like
hours has 60 min , min has 60 sec right 

*/
#include <stdio.h>
void main()
{
	int minute,seconds,hours;
	printf("\nEnter minuts:");
	scanf("%d",&minute);
	//now every  hour has 60 min so
	hours = minute / 60;
	//lets talk about sec so every min has 60 sec
	seconds = minute * 60;
	
	//now lets print them
	printf("\nMinutes you Enter:%d",minute);
	printf("\nHours it has: %d",hours);
	printf("\nSeconds it has:%d",seconds);	
}
