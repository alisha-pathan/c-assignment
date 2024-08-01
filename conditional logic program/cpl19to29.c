/*19.	Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
20. Unit	21. Charge/unit
22. upto 350						23. @1.20
24. 350 and above but less than 600	25. @1.50
26. 600 and above but less than 800	27. @1.80
28. 800 and above					29. @2.00
*/
#include<stdio.h>
int main()
{
	float value;start:
	printf("Enter unit value:");
	scanf("%f",&value);
	if(value<=350)
	{
		printf("%.2f",value*1.20);
	}
	else if(value>350 && value<=600)
	{
		printf("%.2f",value*1.50);
	}
	else if(value>600 && value<=800)
	{
		printf("%.2f",value*1.80);
	}
	else if(value>800)
	{
		printf("%.2f",value*2.0);
	}
	else{
			printf("Invalid");
	}
	char ans='y';
	printf("\nDo you want to continue?(y/n):");
	scanf(" %c",&ans);
	if(ans=='y')
	{
		goto start;
	}
	printf("\nThank You for visiting");
	return 0;
}
