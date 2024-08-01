/*5.Check Number Is Positive or Negative*/
/*it includes zero too assignment number 10*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number to find its positie or negative:");
	scanf("%d",&a);
	if(a == 0)
	{
		printf("a is zero");
	}
	else if (a > 0)
	{
		printf("%d is positive.",a);
	}
	else{
		printf("%d is negative.",a);
	}
	printf("\n");
	// with misc
	printf("\n With mic operator");
	int num;
	printf("\n Enter any number to find its odd or even :");
	scanf("%d",&num);
	
	(num == 0)?printf("it is zero"):(num>0)?printf("it is possitive"):printf("it is negative");
	
}
