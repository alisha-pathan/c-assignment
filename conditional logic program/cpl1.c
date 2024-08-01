/*1.	Write a C program to accept two integers and check whether they are equal or not*/
#include<stdio.h>
int main()
{
	int a , b,c,d ;
	printf("\nEnter any two number : ");
	scanf("%d %d",&a,&b);
	if(a==b){
		printf("they are euqal");
	}
	else{
	 	printf("They are not equal");
		}
		
		// with misc
		printf("\n\tTry with mis operator :-");
		printf("\nEnter any two number : ");
		scanf("%d %d",&c,&d);
		(c==d)?printf("They are equal"):printf("They are not equal");
		return 0;
}
