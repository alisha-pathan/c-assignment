/*18.	Calculate person's Annual salary 
To calculate an annual salary, multiply the gross pay (before tax deductions)
 by the number of pay periods per year. For example, if an employee earns $1,500 per week, 
 the individual's annual income would be 1,500 x 52 = $78,000.
*/
#include <stdio.h>
void main()
{
	long int wsalary,ei,totalA;
	printf("Enter your weekly salary/gross pay: ");
	scanf("%ld",&wsalary);
	printf("Enter your individual income:");
	scanf("%ld",&ei);
	totalA=wsalary*ei;
	printf("Your annual salary :%d",totalA);
	
}
