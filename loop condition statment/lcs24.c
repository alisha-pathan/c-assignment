//24 . 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main()
{
	int n=1,terms,i,sum=0;
	printf("Enter terms : ");
	scanf("%d",&terms);
	printf("\n Series = ");
	for(i=0; i < terms; i++)
	{
		printf("\t %d",i+1);
		sum += i;
	}
	printf("\n Sum of terms = %d",sum);
	return 0;
}
