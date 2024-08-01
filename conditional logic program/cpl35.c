//35.	Accept the input month number and print number of days in that month.
#include<stdio.h>
int main()
{
	int month;
	start:
		printf("\n \t \t<<<WELCOME USER>>>\n");
	printf("\nEnter any number of month to find how many days it has:");
	scanf("%d",&month);
	switch(month)
	{
		case 1 ://31 jan
		case 3 ://31 mar
		case 5 ://31 may
		case 7 ://31 jul
		case 8 ://31 aug
		case 10 ://31 oct
		case 12 ://31 dec
				printf("\nIt has 31 days");
				break;
		 case 2 ://28 29 feb
		 		printf("\nIt has 28 or 29 days");
		 		break;
		case 6 ://30 jun		
		case 9 ://30 sep 
		case 11 ://30 nov 
		case 4 ://30 apr
				printf("It has 30 days ");
				break;
	}
	char ans;
	printf("Do you want to continue:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;
	}
	printf("THANK YOU FOR VISITING");
	return 0;
}
