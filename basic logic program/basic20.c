/*20.	Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.*/
#include <stdio.h>
void main()
{
	int salary,pre,loan,ans;
	printf("Enter your monthly salary:");
	scanf("%d",&salary);
	pre = salary * (10.00/100);
	loan = salary * (10.00/100);;
	ans = salary - pre -loan;
	printf("%d",ans);
	
	
}

