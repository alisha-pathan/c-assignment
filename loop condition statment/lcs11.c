//11.	Accept 5 names from user at run time.
#include<stdio.h>
int main()
{
	char name[100];
	int i;
	for(i=0; i<5; i++)
	{
		printf("\nEnter names:");
		gets(name);
		printf("Name = %s",name);
	}
	
}
