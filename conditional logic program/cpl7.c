#include <stdio.h>
int main()
{
	int marks;
	printf("Enter your percentage to find your result :");
	scanf("%d",&marks);
	
	if(marks<=100 && marks >= 90)
	{
		printf("\"DISTRICTION\" \n [PASS] ");
	}
	else if(marks<=89 && marks >= 75) 
	{
		printf("\"FIRST CLASS\" \n [PASS]");
	}
	else if(marks <= 76 && marks >= 60)
	{
		printf("\"SECOND CLASS\" \n [PASS]");
	}
	else if(marks <= 59 && marks >= 30)
	{
		printf("\"THIRD CLASS\" \n [PASS]");
	}
	else if(marks <= 29 && marks >= 0)
	{
		printf("\"FAIL\"");
	}
	else 
	{
		printf("\"INVALID\" \n [TRY AGAIN]");
	}
}
