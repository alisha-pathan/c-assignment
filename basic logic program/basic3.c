/*
3.	WAP to Find Area And Circumference of Circle
Use the formulas to calculate the circumference OF CIRCLE  = 2pr and AREA OF CIRCLE = pr²
*/
#include <stdio.h>
int main()
{
	float c,area,r;
	float pi = 3.14;
	printf("\nEnter radius : ");
	scanf("%f",&r);
	c = 2 * pi * r;
	area = pi * r * r;

	printf("Here, r = %.2f, pi=%.2f",r,pi);
	printf("\nCircumference of Circle : %.2f",c);
	printf("\n Area of Circle : %.2f",area);
}
