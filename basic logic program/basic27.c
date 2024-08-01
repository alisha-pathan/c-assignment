/*27.	Convert days into months
lets see what we need to do , first we have to get the days by user 
lets say its 75 , the every month lets assume 30 days per month ,what we have to do is first user value / by 30, 
the ans is like the whole months 
now about remaining day % give use reminder so lets do this that days % 30 i guess the reminder is like remaining days
*/
#include <stdio.h>
void main(){
	int days,month,remaining;
	printf("\nEnter the Days:");
	scanf("%d",&days);
	//so here we go with days div by per day(assuming day)
	month = days/ 30;
	printf("\nThe whole months = %d",month);
	//now lets talk about the remaining days so lets get the reminder
	remaining = days % 30;
	printf("\tRemainng days = %d",remaining);
	 // here we have the whole month and the remaining days
	 printf("\nDays you enter : %d \nAccording total month : %d \nthe remaining days :%d",days,month,remaining);
}
