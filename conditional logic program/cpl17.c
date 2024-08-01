/*17.	Write a C program to check whether a triangle can be formed with the given values for the angles.*/
#include <stdio.h>
void main()
{
	int side1,side2, side3,total,side,a,b,c;
	printf("Write the value of three sides to know if it is triangle or not:\n");
	printf("Enter the value of side1:");
	scanf("%d",&side1);
	printf("\nEnter the value of side2:");
	scanf("%d",&side2);
	printf("\nEnter the value of side3:");
	scanf("%d",&side3);
	if(side1>side2 && side1>side3)
	{
		side=side1;
		a = side2;
		b = side3;
	}
	else if(side2>side1 && side2>side3)
	{
		side=side2;
		a=side1;
		b=side3;
	}
	else
	{
	side=side3;
	a=side2;
	b=side1;
	}
	
	total=a + b;
	
	if(total == side)
	{
		printf("It is triangle");
	}
	else{
		printf("It is not triangle");
	}
}
