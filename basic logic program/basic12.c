/*12.	Accept number of students from user. I need to give 5 apples to each student. 
How many apples are required?*/
#include<stdio.h>
void main()
{
	int student,a;
	printf("\nEnter the number student:");
	scanf("%d",&student);
	printf("\nHow many apples you wanna give?:");
	scanf("%d",&a);
	printf("\n");
	printf("The required apples: %d",student*a);
}
