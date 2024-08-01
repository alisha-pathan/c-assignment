#include <stdio.h>
void main()
{
	int n1,n2,n3,large=0;
	printf("Enter any number:");
	scanf("%d",&n1);
	printf("Enter any number:");
	scanf("%d",&n2);
	printf("Enter any number:");
	scanf("%d",&n3);
	if(n1<n2 && n3<n2)
	{
		large=n2;
	}
	else if(n1>n2 && n1>n3){
		large=n1;
	}
	else {
		large=n3;
	}
	printf("Largest number = %d",large);
	
	
	
}
