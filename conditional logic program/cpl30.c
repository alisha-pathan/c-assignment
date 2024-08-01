//30.	If bill exceeds Rs. 800 then a surcharge of 18% will be charged
// andthe minimum bill should be of Rs. 256
#include<stdio.h>
int main()
{
	float bill = 0.0;
	int num;
	
	printf("Enter Amount :");
	scanf("%d",&num);
	
	if(num > 800)
	{
		bill = bill + (num * 0.18);
		printf("Total bill = %.2f",bill);
	}
	else{
		printf("Total bill = %d",num);
	}
	return 0;
}
