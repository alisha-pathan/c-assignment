//33.	WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
	int day;
	printf("\n \t \t<<<WELCOME USER>>>\n");
	start:

	printf("\nEnter a number to find the weekday:");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("\nIt is Sunday");
			break;
		case 2:
			printf("\nIt is Monday");
			break;
		case 3:
			printf("\nIt is Tuesday");
			break;
		case 4:
			printf("\nIt is Wednesday");
			break;
		case 5:
			printf("\nIt is Thurday");
			break;
		case 6:
			printf("\nIt is Friday");
			break;
		case 7:
			printf("\nIt is Saturday");
			break;
		default:
			printf("\nEnter number between 7");
	}

	char ans;
	printf("\nDo you want to continue:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;
	}
	printf("THANK YOU FOR VISITING");
	return 0;
}
