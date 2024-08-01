//34.	Accept month number and display month name

#include<stdio.h>
int main()
{
	int month;
	printf("\n \t \t<<<WELCOME USER>>>\n");
	start:
	printf("\nEnter a number to find its month name:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("\nIt is January");
			break;
		case 2:
			printf("\nIt is February");
			break;
		case 3:
			printf("\nIt is March");
			break;
		case 4:
			printf("\nIt is April");
			break;
		case 5:
			printf("\nIt is May");
			break;
		case 6:
			printf("\nIt is June");
			break;
		case 7:
			printf("\nIt is July");
			break;
		case 8:
			printf("\nIt is August");
			break;
		case 9:
			printf("\nIt is September");
			break;
		case 10:
			printf("\nIt is Octomber");
			break;
		case 11:
			printf("\nIt is November");
			break;
		case 12:
			printf("\nIt is December");
			break;
			
		default:
			printf("\nEnter number between 12");
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
