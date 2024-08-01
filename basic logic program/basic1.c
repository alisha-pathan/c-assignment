/*1.	Display This Information using printf
a.	Your Name
b.	Your Birth date
c.	Your Age
d.	Your Address
*/
#include<stdio.h>
int main()
{
	int age;
	
	printf("\nEnter your age :");
	scanf("%d",&age);
	
	printf("\n Your name : Alisha Pathan");
	printf("\n your birthday : 08/01/2003");
	printf("\n your age : %d",age);
	printf("\n your address : Ahmedabad");
	return 0;
}
