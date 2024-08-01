/*2.	Write a program to make Simple calculator (to make addition, subtraction, multiplication, 
division and modulo)*/
#include <stdio.h>
int main()
{
	int a,b,sum,sub,mul,module,div;
	printf("\nEnter number for calculation :");
	scanf("%d",&a);
	printf("\nEnter number for calculation :");
	scanf("%d",&b);
	sum = a +b;
	sub = a-b;
	div = a/b;
	mul = a*b;
	module = a % b;
	printf("\n%d + %d = %d",a,b,sum);
	printf("\n%d - %d = %d",a,b,sub);
	printf("\n%d * %d = %d",a,b,mul);
	printf("\n%d / %d = %d",a,b,div);
	printf("\n%d %% %d = %d",a,b,module);
}
