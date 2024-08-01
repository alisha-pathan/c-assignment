#include<stdio.h>
void main()
{
	long int gross,selling,profit=0,loss=0;
	printf("Enter gross profit:");
	scanf("%ld",&gross);
	printf("Enter selling price:");
	scanf("%ld",&selling);
	//profit/loss=gross - selling;
	if(gross > selling)
	{
		profit=gross - selling;
		printf("Profit = %ld",profit);
	}
	else{
		loss=selling-gross;
		printf("Loss = %ld",loss);
	}
}
