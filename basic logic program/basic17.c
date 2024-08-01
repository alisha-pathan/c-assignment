/*17.	Calculate person's insurance premium based on salary
Life Insurance Coverage = current yearly wage multiplied by the number of years till retirement.*/
#include <stdio.h>
void main()
{
	long int coverage,cwage,year;
/*	printf("Insurance covreage:");
	scanf("%d",&coverage);*/
	printf("current wage:");
	scanf("%ld",&cwage);
	printf("number of the Year till retirement:");
	scanf("%ld",&year);
	
	coverage=cwage*year;
	printf("Insurance coverage:%ld",coverage);
}
