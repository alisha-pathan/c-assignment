/*32.	Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
int main()
{	
	float salary,gsalary;
	float hra,da;
	printf("\n \t \t<<<WELCOME USER>>>\n");
	start:
	printf("\nEnter your basic salary to calculate your gross salary:");
	scanf("%f",&salary);
	if(salary<=10000)
	{	
		printf("\nYour salary is less than 10000");
		 hra = 20.0 / 100.0 * salary;
        da = 80.0 / 100.0 * salary;
		gsalary=salary+hra+da;
		printf("\nYour HRA = %.0f",hra);
		printf("\nYour DA = %.0f",da);
		printf("\nYour gross salary = %.0f",gsalary);
	}
	else if (salary<=20000 && salary>=10000)
	{
		printf("\nYour salary is in between 10000 and 20000");
	 hra = 20.0 / 100.0 * salary;
        da = 80.0 / 100.0 * salary;
		gsalary=salary+hra+da;
		printf("\nYour HRA = %.0f",hra);
		printf("\nYour DA = %.0f",da);
		printf("\nYour gross salary = %.0f",gsalary);
		}	
	else if (salary>=20000)
	{
		printf("\nYour salary is more than 20000");
		 hra = 20.0 / 100.0 * salary;
        da = 80.0 / 100.0 * salary;
		gsalary=salary+hra+da;
		printf("\nYour HRA = %.0f",hra);
		printf("\nYour DA = %.0f",da);
		printf("\nYour gross salary = %.0f",gsalary);
		}	
	else{
		printf("Error");
	}
	char ans;
	printf("\nDo you want to continue:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;
	}
	printf("THANK YOU FOR VISITING");
	return 0;
}
