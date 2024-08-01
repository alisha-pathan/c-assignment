/*25.	Accept 5 expense from user and find average of expense*/
#include <stdio.h>
void main()
{
   float exp1 , exp2, exp3,exp4,exp5;
	printf("Enter exp1 : ");
	scanf("%f",&exp1);
		printf("Enter exp2 : ");
	scanf("%f",&exp2);
		printf("Enter exp3 : ");
	scanf("%f",&exp3);
		printf("Enter exp4: ");
	scanf("%f",&exp4);
		printf("Enter exp5 : ");
	scanf("%f",&exp5);
	
	float sum = exp1 +exp2 +exp3 +exp4 + exp5;
	float avg= sum / 5;
	
	printf("sum =%.2f, Average = %.2f",sum,avg);
}
